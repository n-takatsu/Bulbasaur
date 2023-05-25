#include "Vector2d.h"

Vector2d::Vector2d() : X(0.0), Y(0.0)
{
}

Vector2d::Vector2d(double x, double y) : X(x), Y(y)
{
}

Vector2d Vector2d::Zero()
{
	return Vector2d(0.0, 0.0);
}

Vector2d Vector2d::XAxis()
{
	return Vector2d(1.0, 0.0);
}


