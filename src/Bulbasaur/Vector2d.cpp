#include "Vector2d.h"

Vector2d::Vector2d() : x(0.0), y(0.0)
{

}

Vector2d::~Vector2d()
{

}

Vector2d::Vector2d(double x, double y) : x(x), y(y)
{

}

const Vector2d Vector2d::Zero()
{
	return Vector2d(0.0, 0.0);
}

const Vector2d Vector2d::XAxis()
{
	return Vector2d(1.0, 0.0);
}

const Vector2d Vector2d::YAxis()
{
	return Vector2d(0.0, 1.0);
}

Vector2d Vector2d::operator+(const Vector2d& other) const
{
	return{x + other.x, y + other.y};
}



