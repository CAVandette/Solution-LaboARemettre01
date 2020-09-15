// But : Déterminer si un nombre entier est pair ou impair
// Auteur : Charles-Auguste Vandette
// Date : 2020-09-10

#include <iostream>      // FR : Est un coffre a outils de communication

void main()
{      // FR : Emplacement du programme principale
	
	setlocale(LC_ALL, ""); // Pour afficher les caractères correctement dans la console

	int nombre1;      // int nombre1 et somme est la déclaration des variables
	int somme;		// KM : Pourquoi appeler cette variable somme ???

	std::cout << "Entrer un nombre entier : ";       // Demande à l'utilisateur d'entrer un nombre entier

	std::cin >> nombre1;     // Réception du nombre par l'utilisateur

	somme = nombre1 % 2;    // équation qui détermine si la somme du nombre entier divisé par deux donne 1 (impair) ou 0 (pair)

	if (somme == 0)       //indique au programme d'afficher que le nombre est pair si la somme est = à 0
	{

		std::cout << nombre1 << " est pair";

		}
	else    // dans le cas contraire, le programme affichera automatiquenemt que le nombre est impaire.
	{
		std::cout << nombre1 << " est impair";
	}

	// KM : Super !!!
	// FR : programme simple, résolu trèe rapidement!


 }





// Plan de tests
// KM : Le plan de tests devrait utiliser des valeurs négatives et la valeur 0
/*
nombre		 pair				impair			Résultat attendu
10			 X					             Affiche 10 en pair
13			 					X			 Affiche 13 en impair

*/
