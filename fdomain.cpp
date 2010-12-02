// Copyright (C) 2010  Simone Riva -- em: simone [dot] rva -a- gmail com

//   This program is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.

//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.

//   You should have received a copy of the GNU General Public License
//   along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "fdomain.h"

FDomain::FDomain()
{
}

void FDomain::setDomain( double min_x , double max_x , double min_y , double max_y )
{
    this->setXDomain( min_x , max_x ) ;
    this->setYDomain( min_y , max_y ) ;
}

void FDomain::setXDomain( double min_x , double max_x )
{
    this->setMinX( min_x );
    this->setMaxX( max_x );
}

void FDomain::setYDomain( double min_y , double max_y )
{
    this->setMinY( min_y );
    this->setMaxY( max_y );
}
