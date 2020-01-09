#pragma once
#include <iostream>
#include <map>
#include <string>

class Vecteur;

class Matrice
{
private:
	int nb_arg;
	float *tab[3] = { 0 };
public:
	friend std::ostream& operator<<(std::ostream& out, const Matrice& m);
	friend Matrice prod(Vecteur &v, Matrice &m);
	Matrice prod2(Vecteur& v, Matrice& m);
	//constructeur
	Matrice(int nb);
	//destructeur
	~Matrice();
};

