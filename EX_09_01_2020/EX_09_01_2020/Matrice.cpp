#include "Matrice.h"
#include "Vecteur.h"

Matrice::Matrice(int nb)
{
	nb_arg = nb;
	float val = 1;
	for (int i = 0; i < 3; i++)
	{
		tab[i] = new float[nb];
		for (int j = 0; j < nb; j++)
		{
			tab[i][j] = val;
			val++;
		}
	}
}

Matrice::~Matrice()
{
}

std::ostream& operator<<(std::ostream& out, const Matrice& m)
{
	out << "[";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < m.nb_arg; j++)
		{
			out << m.tab[i][j];
			if (j != m.nb_arg - 1)
				out << ", ";
		}
		if (i != 2)
			out << "\n";
	}
	out << "]";
	return out;
}

//////////NUMERO 1//////////
Matrice prod(Vecteur &v, Matrice &m)
{
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[0][i] *= v.x;
	}
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[1][i] *= v.y;
	}
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[2][i] *= v.z;
	}
	return m;
}

//////////NUMERO 2//////////
Matrice Matrice::prod2(Vecteur& v, Matrice& m)
{
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[0][i] *= v.x;
	}
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[1][i] *= v.y;
	}
	for (int i = 0; i < m.nb_arg; i++) {
		m.tab[2][i] *= v.z;
	}
	return m;
}
