/***************************************************************************
 *   Copyright (c) sliptonic (shopinthewoods@gmail.com) 2020               *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/
#ifndef PATH_VORONOIVERTEX_H
#define PATH_VORONOIVERTEX_H

#include <Base/Handle.h>
#include <Base/BaseClass.h>
#include <Base/Vector3D.h>
#include <Base/VectorPy.h>
#include "Voronoi.h"

namespace Path
{

class Voronoi;

class PathExport VoronoiVertex
  : public Base::BaseClass
{
  TYPESYSTEM_HEADER();
public:

  VoronoiVertex(Voronoi::diagram_type* dia = 0, long index = INT_MAX);
  ~VoronoiVertex();

  bool isBound(void) const { return dia.isValid() && index != INT_MAX; }

  Base::Reference<Voronoi::diagram_type> dia;
  long index;
};

}
#endif
