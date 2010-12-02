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

#ifndef MANDELMAINW_H
#define MANDELMAINW_H

#include <QMainWindow>

namespace Ui {
    class MandelMainW;
}

class MandelMainW : public QMainWindow
{
    Q_OBJECT

public:
    explicit MandelMainW(QWidget *parent = 0);
    ~MandelMainW();

private:
    Ui::MandelMainW *ui;
};

#endif // MANDELMAINW_H
