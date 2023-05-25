#pragma once
#include "Vector2d.h"

struct Vector2d {
	double X;
	double Y;

public:
	Vector2d();
	Vector2d(double x, double y);

	static Vector2d Zero();
	static Vector2d XAxis();
};



