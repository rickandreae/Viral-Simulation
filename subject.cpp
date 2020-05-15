// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include <math.h>

namespace corsim
{

Subject::Subject(int x, int y, int radius)
{
    this->_x = x;
    this->_y = y;
    this->_radius = radius;
}

double Subject::x()
{
    return this->_x;
}

double Subject::y()
{
    return this->_y;
}

void Subject::set_x(double x)
{
    this->_x = x;
}

void Subject::set_y(double y)
{
    this->_y = y;
}

double Subject::dx()
{
    return this->_dx;
}

double Subject::dy()
{
    return this->_dy;
}

void Subject::set_dx(double dx)
{
    this->_dx = dx;
}

void Subject::set_dy(double dy)
{
    this->_dy = dy;
}

int Subject::radius()
{
    return this->_radius;
}

double Subject::angle()
{
    return atan2(_dy,_dx);
}

double Subject::speed()
{
    return sqrt(_dx * _dx + _dy * _dy);
}

int Subject::infected()
{
    return this->_time_till_immunity;
}

int Subject::immune()
{
    return this->_immunity_time;
}

void Subject::minus_infection()
{
    this->_time_till_immunity = _time_till_immunity-1;
}

void Subject::minus_immunity()
{
    this->_immunity_time = _immunity_time-1;
}

void Subject::infect()
{
    this->_time_till_immunity = 600;
}

void Subject::immunized()
{
    this->_immunity_time = 1400;
}

void Subject::set_strategy(MovementStrategy *strategy)
{
    this->strategy_ = strategy;
}

}