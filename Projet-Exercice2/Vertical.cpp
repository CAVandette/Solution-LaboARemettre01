// But : Afficher une suite de 5 chiffres verticalement
// Auteur : Charles-Auguste Vandette
// Date : 2020-09-10

#include <iostream> // permet la communiquation entre l'utilisateur et le serveur.

void main() // contient mon programme principale.
{
	setlocale(LC_ALL, ""); // permet de bien traduire les accents.



	//chemin de pensé no1
	// bien, alors dans cette solution, j'arrive a afficher 5 numéro de 5 chiffres un par dessus l'autre, il y a du progrès mais beaucoup de travail encore.

	/*
	
	
	int fivenumber;
	int a;
	int b;
	int c;
	int d;
	int e;

	five number = a + b + c + d + e

	std::cout << "Veuillez entrer un nombre à cinq chiffres : ";

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




	//chemin de pensé no2
	// dans cette solution, j'ai essayé d'élaboré une variable qui se diviserais par 5 au moment de l'affichage en attribuant d'autre variables...le croquis est loin 
	// d'être achevé...

	/* int fivenumber;


std::cout << "Veuillez entrer un nombre à cinq chiffres : ";

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
	







	//chemin de pensé no3
	// dans cette solution, j'ai essayé de donné a la variable fivenumber 5 variables (a,b,c,d,e)... l'idée ne semble pas mauvaise sur papier mais au point de vue pratique,
	// c'est un désastre!

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

	std::cout << "Veuillez entrer un nombre à cinq chiffres : ";

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




// chemin de pensé no4 
//dans cette solution, j'ai essayé de travaillé vers les modulo, çela semble être une bonne solution, mais a bout de plus de 6h de travail... je perd espoir.

/* int number5c;

std::cout << "Veuillez entrer un nombre à cinq chiffres : ";

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
// modulo était bel et bien la solution! seulement, il fallait y ajouter de la division, c'était si simple que le voile de complexité me bloquais la vue!!!

int number5c; // ici, on prépare le nombre a 5 chiffres a recevoir une information.

std::cout << "Veuillez entrer un nombre à cinq chiffres : "; // affiche a l'écran "veuillez entrer un nombre a 5 chiffres."

std::cin >> number5c; // demande a l'utilisateur d'entré le dit nombre.

int numero5; // prépare le premier chiffre du nombre a 5 chiffres
int numero4; // prépare le second chiffre du nombre a 5 chiffres
int numero3; // prépare le troisième chiffre du nombre a 5 chiffres
int numero2; // prépare le quatrième chiffre du nombre a 5 chiffres
int numero1; // prépare le cinquième chiffre du nombre a 5 chiffres


/*À qui de droit, de numéro 5 à 1 suivant, il fût plus que difficile de résoudre la solution. Tel que laissé sous forme de commentaires, tout mes croquis montre bien la démarche
étape par étape de mon raisonnement vers cette solution finale (et surtout fonctionnelle). il me fallut 7h51 minutes environs pour mettre a terme ce projet. bien qu'il s'agit d'une 
quantité d'heures irrationnel pour cette charge de travail, avoir remplis ma commande me suffit a rembourser la quantité d'efforts donnés. 
Quoi qu'il en soit, la fierté éprouvé l'orsque je cria "Eureka" est indéniable.  */


numero5 = number5c % 10; //ici, on exprime un modulo 10 car le résultat d'un modulo 10 face a un nombre donnera toujours son dernier chiffre
numero4 = number5c / 10 % 10; //ici on divise par 10 de façon a obtenir un nombre a 4 chiffres (12345 / 10 = 1234,5) et comme on travaille avec des entiers, les décimales sont oublié
// suite de quoi le modulo 10 donne la valeur du derni chiffre attribué au nouveau nombre a 4 chiffres.
numero3 = number5c / 100 % 10; // même principe pour cette équation mais divisé par 100 car (12345 / 100 = 123,45 % 10 = 3)
numero2 = number5c / 1000 % 10; // même principe pour cette équation mais divisé par 1000 car (12345 / 1000 = 12,345 % 10 = 2)
numero1 = number5c / 10000 % 10; // même principe pour cette équation mais divisé par 10000 car (12345 / 10000 = 1,2345 % 10 = 1)




if (number5c >= 10000) //dit a mon programme: si le nombre a 5 chiffres, le placer en ordre sur 5 lignes.
{

	std::cout << numero1 << std::endl; // affiche le premier chiffre entré dans le nombre a 5 chiffres. (endl; ici saute une ligne.)
	std::cout << numero2 << std::endl; // affiche le second chiffre entré dans le nombre a 5 chiffres.
	std::cout << numero3 << std::endl; // affiche le troisième chiffre entré dans le nombre a 5 chiffres.
	std::cout << numero4 << std::endl; // affiche le quatrième chiffre entré dans le nombre a 5 chiffres.
	std::cout << numero5 << std::endl; // affiche le cinquième chiffre entré dans le nombre a 5 chiffres.
}
else //  si le nombre fournis n'a pas 5 chiffres, le programme ignore le if et affiche else a la place qui indique "ce nombre ne contient pas 5 chiffres."
{

	std::cout << "ce nombre ne contient pas 5 chiffres"; //affiche a l'écran "ce nombre ne contient pas 5 chiffres"
}




// Plan de tests
/*
nombre 5 chiffres: *****					Résultat attendu:
											(ordre)
											1
											2
											3
											4
											5
											/
nombre <5 chiffres: ****					Ce nombre ne contient pas 5 chiffres.

*/




//problèmes avec return 0; ?? il ne semble pas fonctionner lorsque intègrer...
} // fermeture du bloc d'instruction principale.