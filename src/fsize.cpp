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

#include "fsize.h"

FSize::FSize()
{
    setSize( 300 , 300 );
}

FSize::FSize( unsigned int width, unsigned int height )
{
    setSize( width , height );
}

void FSize::setSize( unsigned int width, unsigned int height )
{
    this->setWidth( width );
    this->setHeight( height );
}
