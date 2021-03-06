#include "Vec2d.hpp"

Vec2d::Vec2d(){
	x = 0;
	y = 0;
}

Vec2d::Vec2d(double x, double y){
	this->x = x;
	this->y = y;
}

Vec2d& Vec2d::operator+=(const Vec2d& other){
	x += other.x;
	y += other.y;
	return *this;
}
