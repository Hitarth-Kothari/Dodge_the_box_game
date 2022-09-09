#pragma once
#include "Graphics.h"
#include"Cross.h"
#include "MainWindow.h"
#include"Keyboard.h"
#include <random>
#include <assert.h>


class Box
{
public:
	void Update();
	void Draw(Graphics& gfx);
	bool Collisions(const Cross& Cr, MainWindow& wnd);
	void Generate();
	int X() const;
	int Y() const;
	bool check();
	void set();
	void reset();

private:
	int x;
	int y;
	int vo;
	int vp;
	bool inicialized = false;
	bool attack = false;
};