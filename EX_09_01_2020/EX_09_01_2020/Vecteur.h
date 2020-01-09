#pragma once
#include <iostream>
#include <map>
#include <string>
#include "Matrice.h"

class Vecteur {
private:
	float x;
	float y;
	float z;
public:
	friend std::ostream& operator<<(std::ostream& out, const Vecteur& v);
	friend Matrice prod(Vecteur& v, Matrice& m);
	friend Matrice Matrice::prod2(Vecteur& v, Matrice& m);
	//constructeur
	Vecteur(float x = 0, float y = 0, float z = 0);
	//destructeur
	~Vecteur();
};