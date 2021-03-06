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

/** @file EditorLayer.hpp */

#ifndef EDITOR_LAYER_HPP
#define EDITOR_LAYER_HPP

#include <Json.hpp>
#include <Vector3.hpp>

/** Editor Layer. */
class EditorLayer
{
public:
    EditorLayer();

    void set(size_t id,
             const std::string &label,
             bool enabled,
             const Vector3<float> &color);

    size_t id() const { return id_; }

    bool isEnabled() const { return enabled_; }
    void setEnabled(bool b);

    const std::string &label() const { return label_; }
    void setLabel(const std::string &label);

    const Vector3<float> &color() const { return color_; }
    void setColor(const Vector3<float> &color);

    void read(const Json &in);
    Json &write(Json &out) const;

protected:
    // Stored
    std::string label_;
    Vector3<float> color_;
    size_t id_;
    bool enabled_;
};

#endif /* EDITOR_LAYER_HPP */
