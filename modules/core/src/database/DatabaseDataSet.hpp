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

/**
    @file DatabaseDataSet.hpp
*/

#ifndef DATABASE_DATA_SET_HPP
#define DATABASE_DATA_SET_HPP

#include <LasFile.hpp>
#include <OctreeIndex.hpp>
#include <string>

/** Database Data Set. */
class DatabaseDataSet
{
public:
    size_t id_;
    std::string path_;
    bool enabled_;

    OctreeIndex index_;
    Aabb<double> boundary_;
    Aabb<double> boundaryView_;

    DatabaseDataSet();
    ~DatabaseDataSet();

    void read(size_t id, const std::string &path, bool enabled);
};

#endif /* DATABASE_DATA_SET_HPP */