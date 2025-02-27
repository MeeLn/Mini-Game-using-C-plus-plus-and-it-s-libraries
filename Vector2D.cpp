#include "Vector2D.h"

Vector2D::Vector2D() {
	x = 0;
	y = 0;
}

Vector2D::Vector2D(int x, int y) {
	this->x = x;
	this->y = y;
}

Vector2D& Vector2D::Add(const Vector2D& vec) {
	this->x += vec.x;
	this->y += vec.y;
	return *this;
}

Vector2D& Vector2D::Multiply(const Vector2D& vec) {
	this->x *= vec.x;
	this->y *= vec.y;
	return *this;
}

Vector2D& Vector2D::Subtract(const Vector2D& vec) {
	this->x -= vec.x;
	this->y -= vec.y;
	return *this;
}

Vector2D& Vector2D::Divide(const Vector2D& vec) {
	this->x /= vec.x;
	this->y /= vec.y;
	return *this;
}

Vector2D& operator+(Vector2D v1, const Vector2D& vec) {
	return v1.Add(vec);
}

Vector2D& operator-(Vector2D v1, const Vector2D& vec) {
	return v1.Subtract(vec);
}

Vector2D& operator*(Vector2D v1, const Vector2D& vec) {
	return v1.Multiply(vec);
}

Vector2D& operator/(Vector2D v1, const Vector2D& vec) {
	return v1.Divide(vec);
}

Vector2D& Vector2D::operator+=(const Vector2D& vec) {
	return this->Add(vec);
}

Vector2D& Vector2D::operator-=(const Vector2D& vec) {
	return this->Subtract(vec);
}

Vector2D& Vector2D::operator*=(const Vector2D& vec) {
	return this->Multiply(vec);
}

Vector2D& Vector2D::operator/=(const Vector2D& vec) {
	return this->Divide(vec);
}

Vector2D& Vector2D::operator*(const int i) {
	this->x *= i;
	this->y *= i;

	return *this;
}

Vector2D& Vector2D::zero() {
	this->x = 0;
	this->y = 0;

	return *this;
}