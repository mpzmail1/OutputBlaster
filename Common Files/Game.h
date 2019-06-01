/*This file is part of Output Blaster.

Output Blaster is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Output Blaster is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Output Blaster.If not, see < https://www.gnu.org/licenses/>.*/

#pragma once
#include "../Output Files/WinOutputs.h"

static GameOutput m_game;
static COutputs  *Outputs;
static uintptr_t imageBase;
static MSG Msg1;
static UINT Output_Time;

static bool init = false;

class Game {
public:
	virtual void OutputsGameLoop();
};