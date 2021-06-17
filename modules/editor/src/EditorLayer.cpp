/*
    Copyright 2020 VUKOZ

    This file is part of 3D Forest.

    3D Forest is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    3D Forest is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with 3D Forest.  If not, see <https://www.gnu.org/licenses/>.
*/

/** @file EditorLayer.cpp */

#include <EditorLayer.hpp>
#include <Error.hpp>

EditorLayer::EditorLayer()
{
}

EditorLayer::~EditorLayer()
{
}

void EditorLayer::read(const Json &in)
{
    if (!in.isObject())
    {
        THROW("Layer is not JSON object");
    }

    // ID
    id = in["id"].uint32();

    // Label
    if (in.contains("label"))
    {
        label = in["label"].string();
    }
    else
    {
        label = "";
    }

    // Visible
    if (in.contains("visible"))
    {
        visible = in["visible"].isTrue();
    }
    else
    {
        visible = true;
    }
}

Json &EditorLayer::write(Json &out) const
{
    out["id"] = id;
    out["label"] = label;
    out["visible"] = visible;

    return out;
}
