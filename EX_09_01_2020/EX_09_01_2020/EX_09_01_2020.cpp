// EX_09_01_2020.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Vecteur.h"
#include "Matrice.h"

using namespace std;

int main()
{
	Vecteur v1(2, 3, -6);
	Vecteur v2(4, -3, -1);
	Matrice m1(3);
	Matrice m2(6);

	cout << v1 << endl;
	cout << v2 << endl;
	cout << m1 << endl;
	cout << m2 << endl << endl;
	cout << prod(v1, m1) << endl << endl;
	cout << m1.prod2(v1, m1) << endl;
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
