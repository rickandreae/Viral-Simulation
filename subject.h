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

#pragma once 

#include <string>
#include "MovementStrategy.h"

namespace corsim
{
class MovementStrategy;
/**
 * A subject is an entity within the simulation. It is modeled as a
 * circle in 2D and can be infected.
 */
class Subject
{
    public:
        Subject(int x, int y, int radius);
        double x();
        double y();
        void set_x(double x);
        void set_y(double y);
        double dx(); //Speed on x axis
        double dy(); //Speed on y axis
        int radius(); //Radius needed for collisions
        void set_dx(double dx);
        void set_dy(double dy);
        int infected();//infection time left
        int immune();//immunity time left
        void infect();//sets target infected for a limited time
        double angle();
        double speed();
        void set_strategy(MovementStrategy *strategy);//sets desired strategy
        void immunized();//sets target immune for a limited time
        void minus_immunity();//immunity degrader
        void minus_infection();//virus degrader
        MovementStrategy *strategy_;
    private:
        double _x = 0,_y = 0, _dx = 0, _dy = 0;
        int _radius = 0;
        int _immunity_time = 0;
        int _time_till_immunity = 0;
};

};