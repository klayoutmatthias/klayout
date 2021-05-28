
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbCommon.h"

#include "dbEdgePairFilters.h"
#include "dbEdges.h"

namespace db
{

// ---------------------------------------------------------------------------------------------------
//  EdgeFilterBasedEdgePairFilter implementation

EdgeFilterBasedEdgePairFilter::EdgeFilterBasedEdgePairFilter (EdgeFilterBase *edge_filter, bool one_must_match)
  : mp_edge_filter (edge_filter), m_one_must_match (one_must_match)
{
  //  .. nothing yet ..
}

EdgeFilterBasedEdgePairFilter::~EdgeFilterBasedEdgePairFilter ()
{
  //  .. nothing yet ..
}

bool EdgeFilterBasedEdgePairFilter::selected (const db::EdgePair &edge_pair) const
{
  if (m_one_must_match) {
    return mp_edge_filter->selected (edge_pair.first ()) || mp_edge_filter->selected (edge_pair.second ());
  } else {
    return mp_edge_filter->selected (edge_pair.first ()) && mp_edge_filter->selected (edge_pair.second ());
  }
}

const TransformationReducer *EdgeFilterBasedEdgePairFilter::vars () const
{
  return mp_edge_filter->vars ();
}

bool EdgeFilterBasedEdgePairFilter::wants_variants () const
{
  return mp_edge_filter->wants_variants ();
}

// ---------------------------------------------------------------------------------------------------
//  EdgePairFilterByDistance implementation

EdgePairFilterByDistance::EdgePairFilterByDistance (distance_type min_distance, distance_type max_distance, bool inverted)
  : m_min_distance (min_distance), m_max_distance (max_distance), m_inverted (inverted)
{
  //  .. nothing yet ..
}

static db::coord_traits<db::Coord>::distance_type
distance_of_point_from_edge (const db::Edge &e, const db::Point &p)
{
  if (db::sprod_sign (p - e.p1 (), e.d ()) < 0) {
    return e.p1 ().distance (p);
  } else if (db::sprod_sign (p - e.p2 (), e.d ()) > 0) {
    return e.p2 ().distance (p);
  } else {
    return e.distance (p);
  }
}

bool EdgePairFilterByDistance::selected (const db::EdgePair &edge_pair) const
{
  distance_type dist = 0;
  db::Edge e1 = edge_pair.first (), e2 = edge_pair.second ();
  if (! e1.intersect (e2)) {
    distance_type d12 = std::min (distance_of_point_from_edge (e2, e1.p1 ()), distance_of_point_from_edge (e2, e1.p2 ()));
    distance_type d21 = std::min (distance_of_point_from_edge (e1, e2.p1 ()), distance_of_point_from_edge (e1, e2.p2 ()));
    dist = std::min (d12, d21);
  }

  bool sel = (dist >= m_min_distance && dist < m_max_distance);
  return m_inverted ? !sel : sel;
}

}
