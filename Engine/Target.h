#pragma once
#include "Graphics.h"
#include"Cross.h"
#include "MainWindow.h"
#include <random>


class Target
{
public:
	
	bool Collision(const Cross& Cr, MainWindow& wnd);
	void Generate();
	void Draw(Graphics& gfx) const;
private:
	int l = 10;
	int b = 10;
	int x ;
	int y ;
};

