//-----------------------------------------------------------------------------------//
// Nom du projet 		: demoSLO1_24_25
// Nom du fichier 		: Source2.c 
// Date de cr�ation 	: 19.09.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour les slos 1 
//                        - type entier - reel 
// 
//
//
// Remarques :       
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveaut� du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
#include <limits.h>
#include <stdint.h> // type entier normails� 

//-- constante gloable 
const double PI = 3.14;     // pas d'optimisation m�moire 





int slo(void)
{
    //-- d�claration possible --//
    //-- type + nom ; 
    //-- type entier standart --//
    //-- sign�  
    char a;         // -- 8bits / 1 octet 
    short b;        // -- 16bits / 2 octets 
    int c;          // -- 32bits / 4 octets - ATTENTION : d�pend soit du processeur ou du compilateur 
    long long d;    // -- 64bits ? 

    //-- non sign�  
    unsigned char a1;  // -- 8bits 
    unsigned b2 = 3.14; // A EVITER !!!!  

    //-- constante num�rique
    // 3.14 -> m�moire 8 octets
    // 3    -> m�moire 4 octets

    //-- type entier normalis� - ATTENTION LIBRAIRIE --//
    //-- sign�  
    int8_t a2;     // -- 8bits 
    int16_t b3;    // -- 16bits 
    int32_t c2;     // -- 32bits 
    int64_t d2;     // -- 64bits ? 

    //-- non sign�
    uint8_t a3;     // -- 8bits 
    uint16_t b4;    // -- 16bits 
    uint32_t c3;     // -- 32bits 
    uint64_t d3;   // -- 64bits ? 

    //-- type r�el 
    float r1;     // -- 32bits 
    double r2;    // -- 64bits 

    //-- appel de fonction pour conna�tre la taille d'un type ou variable 
    // sizeof(long)

    printf("valeur long : %d octet", sizeof(3));
    printf("\n valeur de b2 : %d", b2); 

     

  return(0);
}