//-----------------------------------------------------------------------------------//
// Nom du projet 		: exercice 3
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 08.11.2024
//
// Auteur 				: MBZ (Mohamad Bilal Zitouni )
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include <math.h>

enum e_Typefigure { cercle, ellipse, carre, rectangle, triangle };  // type énumération !!!!

// Déclaration globales des constantes
// -----------------------------------
const short VMAX = 1000;
const short VMIN = -1000;
const double PI = 3.14159;

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double surface, rayon=100;

	char lettre = 'a';


	// déclaration + Affectations
	// ------------
	short tension = VMAX;
	int bigVal = 123456;				// 0x1E240


	enum e_Typefigure figure; 


	// instrcution 
	surface = PI * rayon * rayon;
	lettre = 0x42;						// lettre B 
	figure = carre;

	// Affichages pour controle
	printf ("Tension = %d \n", tension);
 	printf ("BigVal = %lx \n", bigVal);			// question que représente lx 
	printf ("Lettre  = %c \n",lettre);
	printf ("Figure = %d \n", figure);
	printf("rayon = %8.3f Surface = %8.3f \n", rayon, surface);
	//printf("Surface = % 8.3f \n",Surface);

  return(0);
}
