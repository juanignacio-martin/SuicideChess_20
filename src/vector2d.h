#pragma once
#include <cmath>

struct Vector2D
{
	double x{};
	double y{};
	double modulo() const; //modulo del vector
	double argumento() const; //argumento del vector
	Vector2D unitario() const; //devuelve un vector unitario

	Vector2D(int _x = 0, int _y = 0) :x(_x), y(_y) {};

	//Los siguientes miembros hace uso de la SOBRECARGA DE OPERADORES
	Vector2D operator - (const Vector2D&) const; //resta de vectores
	Vector2D operator + (const Vector2D&) const; //suma de vectores
	double operator *(const Vector2D&) const; // producto escalar
	Vector2D operator *(double) const; // producto por un escalar
	
	bool operator !=(const Vector2D& v) {
		if (x != v.x || y != v.y)return true;
		else return false;
	}
};

inline double Vector2D::modulo() const
{
	return sqrt(x * x + y * y);
}

inline double Vector2D::argumento() const {
	return atan2(y, x); //atan2 da el valor del argumento teniendo en cuenta el cuadrante, y si la componente en x es nula, indica correctamente el angulo (90º o -90º)
}

inline Vector2D Vector2D::unitario() const
{
	auto mod = modulo(); //auto simplemente deduce automaticamente el tipo de la variable mod. (no hace falta especificarle que mod es un double, ya lo deduce)
	if (mod > 0.00001) return { x / mod, y / mod };
	return { x,y };
}

inline Vector2D Vector2D::operator - (const Vector2D& v) const
{
	return { x - v.x , y - v.y }; //'x' e 'y' son las coordenadas del primer vector , y 'v.x' y v.y' son las coordenadas del segundo vector.
}
inline Vector2D Vector2D::operator + (const Vector2D& v) const
{
	return { x + v.x , y + v.y };
}

inline double Vector2D::operator *(const Vector2D& v) const
{
	double producto_escalar;
	auto mod1 = modulo(); //modulo primer vector
	auto mod2 = sqrt(v.x * v.x + v.y * v.y); //modulo segundo vector
	auto angulo = argumento() - atan2(v.y, v.x);   //angulo entre los dos vectores

	producto_escalar = mod1 * mod2 * cos(angulo);

	return producto_escalar;
}

inline Vector2D Vector2D::operator *(double d) const
{
	return { d * x, d * y }; 
}

inline Vector2D operator * (double f, const Vector2D& v)
{
	return { v.x * f, v.y * f }; 
}

