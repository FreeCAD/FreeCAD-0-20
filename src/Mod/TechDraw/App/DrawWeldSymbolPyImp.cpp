/***************************************************************************
 *   Copyright (c) 2019 WandererFan <wandererfan@gmail.com>                *
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

#include "PreCompiled.h"
#ifndef _PreComp_
#endif

#include <Base/Console.h>
#include <Base/PyObjectBase.h>
#include <Base/Vector3D.h>

#include "DrawWeldSymbol.h"

// inclusion of the generated files (generated out of DrawWeldSymbolPy.xml)
#include <Base/VectorPy.h>
#include <Mod/TechDraw/App/DrawWeldSymbolPy.h>
#include <Mod/TechDraw/App/DrawWeldSymbolPy.cpp>

using namespace TechDraw;

// returns a string which represents the object e.g. when printed in python
std::string DrawWeldSymbolPy::representation() const
{
    return std::string("<DrawWeldSymbol object>");
}

//PyObject* DrawWeldSymbolPy::getTiles(PyObject *args)
//{
//    const char* fileSpec;
//    PyObject* pTile
//    if (!PyArg_ParseTuple(args, "O", &pTile)) {
//       throw Py::TypeError("getTiles expected DrawTile");
//    }
//    auto dws = getDrawWeldSymbolPtr();
////    auto dt  = pTile->getDrawTilePtr();
////TODO: finish this!
//    Py_Return;
//}

PyObject *DrawWeldSymbolPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int DrawWeldSymbolPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}
