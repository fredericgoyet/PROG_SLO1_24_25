/*---------------------------------------------------------------------------------- -//
// Nom du projet 		: demoSLO1_24_25
// Nom du fichier 		: demoSLO.c 
// Date de cr�ation 	: 19.09.2024
// Date de modification : 24.09.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour les slos 1 
//						  1) calculer diff�rentes surfaces 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interpr�tation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers diff�rents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------*/
//-- CONSTANTE - WARNING � �vit� ici 
#define _USE_MATH_DEFINES				// pour utiliser certaines constante � red�finir 

//-- librairies standards --//
#include <math.h>						// pour les diff�rentes fonctions math�matique 

//-- appel de headerfile  -> vos fichier headerfile 

//-- prototypes - WARNING � �vit� ici 

//-- variables globales - WARNING � �vit� 

//-- d�claration de fonction 


/* ----------------------------------------------------------------------------------
// -> NOM FCT					:	main 
// -> PARAMETRES ENTRES			:	-
// -> PARAMETRE SORTIE			:   -
// -> PARAMETRE IN/OUT -> ptr	:   - 
// -> description				:	fonction principale -> d�but de programme 
 ----------------------------------------------------------------------------------*/
void main() 
{   
	//-- d�claration de variable --// 
	//-- type entier 
	int longueur_m = 100, largeur_m = 10, rayon = 1; 

	//-- type reel 
	float surfaceCarre_m2, surfaceRectangle_m2, surfaceTriangle_m2, surfaceCercle_m2; 

	//-- calculs surface --// 
	//-- carr� 
	surfaceCarre_m2 = longueur_m * longueur_m; 
	surfaceCarre_m2 = powf(longueur_m, 2); 

	//-- rectangle 
	surfaceRectangle_m2 = longueur_m * largeur_m;
	
	//-- triangle 
	surfaceTriangle_m2 = (longueur_m * largeur_m) / 2; 
	
	//-- cercle 
	surfaceCercle_m2 = M_PI * (rayon * rayon); 
	surfaceCercle_m2 = M_PI * powf(rayon, 2); 

}

//-- d�claration de fonction 




	



