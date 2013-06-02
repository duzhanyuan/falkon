/* ============================================================
* GreaseMonkey plugin for QupZilla
* Copyright (C) 2013  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef GM_ICON_H
#define GM_ICON_H

#include "clickablelabel.h"

class QupZilla;
class GM_Manager;

class GM_Icon : public ClickableLabel
{
    Q_OBJECT

public:
    explicit GM_Icon(GM_Manager* manager, QupZilla* window);

private slots:
    void openSettings();

private:
    GM_Manager* m_manager;
    QupZilla* m_window;
};

#endif // GM_ICON_H
