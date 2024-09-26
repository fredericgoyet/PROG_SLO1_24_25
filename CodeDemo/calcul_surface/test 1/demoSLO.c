//-----------------------------------------------------------------------------------//
// Nom du projet 		: calcul de surface
// Nom du fichier 		: 
// Date de création 	: 25.09.2024
// Date de modification : 25.09.2024
//
// Auteur 				: fred
//
// Version				: 1
//
// Description          : travail de classe PROG
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//-- CONSTANTE - WARNING à évité ici 
#define _USE_MATH_DEFINES				// pour utiliser certaines constante à redéfinir 

//-- librairies standards --//
#include <math.h>	

//-- appel de librairies

//--prototypes WARNING à éviter ici

//--variables globales - WARNING à éviter

//CONSTANTES - WARNING à éviter ici

//--déclaration des fonctions

//--fonction principale -> main
//-- type_de_sortie nom_fct (param_entree1, param_entree2, ....)
void main()
{
	//-- déclaration de variable --// 
	//-- type entier 
	int longueur_m = 100, largeur_m = 10, rayon;

	//-- type reel 
	float surfaceCarre_m2, surfaceRectangle_m2, surfaceTriangle_m2, surfaceCercle_m2;

	//-- calculs --// 
	//-- carré 
	surfaceCarre_m2 = longueur_m ;

	surfaceCarre_m2 = longueur_m * longueur_m;

	//-- rectangle 
	
	surfaceRectangle_m2 = longueur_m * largeur_m;

	//-- triangle 

	surfaceTriangle_m2 = longueur_m * largeur_m / 2;

	//-- cercle 
	
	surfaceCercle_m2 = M_PI * powf(rayon, 2); 

}


//-- appel de headerfile  ->  vos fichiers headerfile


