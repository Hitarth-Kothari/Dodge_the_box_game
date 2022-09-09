/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include <random>
#include "Box.h"
#include "Target.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd)

{
	target.Generate();
	for (int i = 0; i < Boxs; i++)
	{
		Box[i].Generate();
	}
}


void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	
	for (int i = 0; i < Boxs; i++)
	{
		if(Cr.BoxCon == false)
		{
			Box[i].Update();
			Bullet.collision(Box[i]);
			if (Box[i].Collisions(Cr, wnd))
			{
				Cr.BoxCon = true;
			}
		}

		
    }
	if (Cr.BoxCon == false)
	{
		Cr.MovementofCross(gfx, wnd);
	}
	else
	{
		Cr.CrossStop();
	}
    Cr.Borders();
	if (target.Collision(Cr, wnd))
	{
		target.Generate();
	}

	if (Cr.BoxCon == true)
	{
		if (wnd.kbd.KeyIsPressed(VK_SPACE))
		{
			Cr.Reset();
			for (int i = 0; i < Boxs; i++)
			{
				Box[i].reset();
				Box[i].Generate();
			}
		}
	}
	if (wnd.kbd.KeyIsPressed(VK_SPACE))
	{
		Bullet.generate(Cr);
	}
	if (Bullet.check() == true)
	{
		Bullet.update();
	}

}


void Game::ComposeFrame()
{

	Cr.Draw(gfx);
	for (int i = 0; i < Boxs; i++)
	{
		if (Box[i].check() == false)
		{
			Box[i].Draw(gfx);
		}
	}
	
	target.Draw(gfx);
	if (Bullet.check() == true)
	{
		Bullet.draw(gfx);
	}
}




	



