// But : Afficher une suite de 5 chiffres verticalement
// Auteur : Charles-Auguste Vandette
// Date : 2020-09-10

#include <iostream> // permet la communiquation entre l'utilisateur et le serveur.

void main() // contient mon programme principale.
{
	setlocale(LC_ALL, ""); // permet de bien traduire les accents.



	//chemin de pens� no1
	// bien, alors dans cette solution, j'arrive a afficher 5 num�ro de 5 chiffres un par dessus l'autre, il y a du progr�s mais beaucoup de travail encore.

	/*
	
	
	int fivenumber;
	int a;
	int b;
	int c;
	int d;
	int e;

	five number = a + b + c + d + e

	std::cout << "Veuillez entrer un nombre � cinq chiffres : ";

	std::cin >> fivenumber;

	if (fivenumber >= 10000)
	{
		std::cout << fivenumber << std::endl;
		std::cout << fivenumber << std::endl;
		std::cout << fivenumber << std::endl;
		std::cout << fivenumber << std::endl;
		std::cout << fivenumber << std::endl;
	}
	else
	{


		std::cout << "Ce nombre ne contient pas 5 chiffres";
	} */




	//chemin de pens� no2
	// dans cette solution, j'ai essay� d'�labor� une variable qui se diviserais par 5 au moment de l'affichage en attribuant d'autre variables...le croquis est loin 
	// d'�tre achev�...

	/* int fivenumber;


std::cout << "Veuillez entrer un nombre � cinq chiffres : ";

std::cin >> fivenumber;

if (fivenumber >= 10000)
{
	std::cout << qa << std::endl;
	std::cout << wz << std::endl;
	std::cout << ee << std::endl;
	std::cout << rr << std::endl;
	std::cout << tt << std::endl;
}
else
{


	std::cout << "Ce nombre ne contient pas 5 chiffres";
} */
	







	//chemin de pens� no3
	// dans cette solution, j'ai essay� de donn� a la variable fivenumber 5 variables (a,b,c,d,e)... l'id�e ne semble pas mauvaise sur papier mais au point de vue pratique,
	// c'est un d�sastre!

	/*

	int fivenumber;
	int a;
	int b;
	int c;
	int d;
	int e;
	fivenumber = a + b + c + d + e;
	a <= 9;
	b <= 9;
	c <= 9;
	d <= 9;
	e <= 9;

	std::cout << "Veuillez entrer un nombre � cinq chiffres : ";

	std::cin >> a >> b >> c >> d >> e;

	if (a+b+c+d+e >= 10000)
	{
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
	}
	else
	{


		std::cout << "Ce nombre ne contient pas 5 chiffres";
	}

	*/




// chemin de pens� no4 
//dans cette solution, j'ai essay� de travaill� vers les modulo, �ela semble �tre une bonne solution, mais a bout de plus de 6h de travail... je perd espoir.

/* int number5c;

std::cout << "Veuillez entrer un nombre � cinq chiffres : ";

std::cin >> number5c;

int numero5;
int numero4;
int numero3;
int numero2;
int numero1;

numero5 = number5c % 10;
numero4 = number5c ;
numero3 = number5c % 10;
numero2 = number5c % 10;
numero1 = number5c % 10;




if (number5c >= 10000)
{

	std::cout << numero1 << std::endl;
	std::cout << numero2 << std::endl;
	std::cout << numero3 << std::endl;
	std::cout << numero4 << std::endl;
	std::cout << numero5 << std::endl;
}
else
{

	std::cout << "ce nombre ne contient pas 5 chiffres";
}


*/


//solution finale: 5em solution (fonctionnel)
// modulo �tait bel et bien la solution! seulement, il fallait y ajouter de la division, c'�tait si simple que le voile de complexit� me bloquais la vue!!!

int number5c; // ici, on pr�pare le nombre a 5 chiffres a recevoir une information.

std::cout << "Veuillez entrer un nombre � cinq chiffres : "; // affiche a l'�cran "veuillez entrer un nombre a 5 chiffres."

std::cin >> number5c; // demande a l'utilisateur d'entr� le dit nombre.

int numero5; // pr�pare le premier chiffre du nombre a 5 chiffres
int numero4; // pr�pare le second chiffre du nombre a 5 chiffres
int numero3; // pr�pare le troisi�me chiffre du nombre a 5 chiffres
int numero2; // pr�pare le quatri�me chiffre du nombre a 5 chiffres
int numero1; // pr�pare le cinqui�me chiffre du nombre a 5 chiffres


/*� qui de droit, de num�ro 5 � 1 suivant, il f�t plus que difficile de r�soudre la solution. Tel que laiss� sous forme de commentaires, tout mes croquis montre bien la d�marche
�tape par �tape de mon raisonnement vers cette solution finale (et surtout fonctionnelle). il me fallut 7h51 minutes environs pour mettre a terme ce projet. bien qu'il s'agit d'une 
quantit� d'heures irrationnel pour cette charge de travail, avoir remplis ma commande me suffit a rembourser la quantit� d'efforts donn�s. 
Quoi qu'il en soit, la fiert� �prouv� l'orsque je cria "Eureka" est ind�niable.  */


numero5 = number5c % 10; //ici, on exprime un modulo 10 car le r�sultat d'un modulo 10 face a un nombre donnera toujours son dernier chiffre
numero4 = number5c / 10 % 10; //ici on divise par 10 de fa�on a obtenir un nombre a 4 chiffres (12345 / 10 = 1234,5) et comme on travaille avec des entiers, les d�cimales sont oubli�
// suite de quoi le modulo 10 donne la valeur du derni chiffre attribu� au nouveau nombre a 4 chiffres.
numero3 = number5c / 100 % 10; // m�me principe pour cette �quation mais divis� par 100 car (12345 / 100 = 123,45 % 10 = 3)
numero2 = number5c / 1000 % 10; // m�me principe pour cette �quation mais divis� par 1000 car (12345 / 1000 = 12,345 % 10 = 2)
numero1 = number5c / 10000 % 10; // m�me principe pour cette �quation mais divis� par 10000 car (12345 / 10000 = 1,2345 % 10 = 1)




if (number5c >= 10000) //dit a mon programme: si le nombre a 5 chiffres, le placer en ordre sur 5 lignes.
{

	std::cout << numero1 << std::endl; // affiche le premier chiffre entr� dans le nombre a 5 chiffres. (endl; ici saute une ligne.)
	std::cout << numero2 << std::endl; // affiche le second chiffre entr� dans le nombre a 5 chiffres.
	std::cout << numero3 << std::endl; // affiche le troisi�me chiffre entr� dans le nombre a 5 chiffres.
	std::cout << numero4 << std::endl; // affiche le quatri�me chiffre entr� dans le nombre a 5 chiffres.
	std::cout << numero5 << std::endl; // affiche le cinqui�me chiffre entr� dans le nombre a 5 chiffres.
}
else //  si le nombre fournis n'a pas 5 chiffres, le programme ignore le if et affiche else a la place qui indique "ce nombre ne contient pas 5 chiffres."
{

	std::cout << "ce nombre ne contient pas 5 chiffres"; //affiche a l'�cran "ce nombre ne contient pas 5 chiffres"
}




// Plan de tests
/*
nombre 5 chiffres: *****					R�sultat attendu:
											(ordre)
											1
											2
											3
											4
											5
											/
nombre <5 chiffres: ****					Ce nombre ne contient pas 5 chiffres.

*/




//probl�mes avec return 0; ?? il ne semble pas fonctionner lorsque int�grer...
} // fermeture du bloc d'instruction principale.