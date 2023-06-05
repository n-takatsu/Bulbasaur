#pragma once
#include "Vector2d.h"

struct Vector2d {
	double x;
	double y;

public:
	Vector2d();
	~Vector2d();
	Vector2d(double x, double y);

	static const Vector2d Zero();
	static const Vector2d XAxis();
	static const Vector2d YAxis();

	Vector2d operator +(const Vector2d& other) const;
};



