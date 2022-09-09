#pragma once
#include "Graphics.h"
#include "MainWindow.h"



class Cross
{
public:
	void Borders();
	void Draw(Graphics& gfx);
	void MovementofCross(Graphics& gfx, MainWindow& wnd);
	void Reset();
	void CrossStop();
	 int X() const;
	 int Y() const;
	 int Vx() const;
	 int Vy() const;
	 bool BoxCon = false;

private:
	int x = 400;
	int y = 300;
	int z = 255;
	int vx = 0;
	int vy = 0;
	bool inhibitZ = true;
	bool inhibitRight = false;
	bool inhibitLeft = false;
	bool inhibitUp = false;
	bool inhibitDown = false;



	
	
};