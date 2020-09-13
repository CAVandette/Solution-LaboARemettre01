// But : D�terminer si un nombre entier est pair ou impair
// Auteur : Charles-Auguste Vandette
// Date : 2020-09-10

#include <iostream>      // Est un coffre a outils de communication

void main()
{      // Emplacement du programme principale
	
	setlocale(LC_ALL, ""); // Pour afficher les caract�res correctement dans la console

	int nombre1;      // int nombre1 et somme est la d�claration des variables
	int somme;

	std::cout << "Entrer un nombre entier : ";       // Demande � l'utilisateur d'entrer un nombre entier

	std::cin >> nombre1;     // R�ception du nombre par l'utilisateur

	somme = nombre1 % 2;    // �quation qui d�termine si la somme du nombre entier divis� par deux donne 1 (impair) ou 0 (pair)

	if (somme == 0)       //indique au programme d'afficher que le nombre est pair si la somme est = � 0
	{

		std::cout << nombre1 << " est pair";

		}
	else    // dans le cas contraire, le programme affichera automatiquenemt que le nombre est impaire.
	{
		std::cout << nombre1 << " est impair";
	}


	// programme simple, r�solu tr�e rapidement!


 }





// Plan de tests
/*
nombre		 pair				impair			R�sultat attendu
10			 X					             Affiche 10 en pair
13			 					X			 Affiche 13 en impair

*/