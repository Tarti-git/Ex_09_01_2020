#include "Vecteur.h"

Vecteur::Vecteur(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vecteur::~Vecteur()
{
}

std::ostream& operator<<(std::ostream& out, const Vecteur& v)
{
	out << "[" << v.x << ", " << v.y << ", " << v.z << "]";
	return out;
}
