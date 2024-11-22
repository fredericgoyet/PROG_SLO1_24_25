//-----------------------------------------------------------------------------------//
// Projet Name 			: demoSLO1_24_25
// File Name 			: Source2.c 
// Creation Date 		: 19.09.2024
// Modification Date	: 21.11.2024
//
// Authors 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO 1 students  
//                        - use of standard libraries and personal headerfiles  
//                        - Integer, Real, enumeration types 
//                        - function declaration 
// Remarks              :       
//----------------------------------------------------------------------------------//

//-- Standard libraries --//
#include <stdio.h>	// used for the printf and scanf functions 
                    // VC++ News (since 2005, 2008, 2010 et 2015) : scanf_s function replaces the scanf
#include <limits.h>
#include <stdint.h> // normalized Integer Type 

//-- using Personnal HeaderFile --//
#include "fonctionsSLO.h"

//-- Globale constante --// 
const double PI = 3.14;     // no memory optimization  




/* ----------------------------------------------------------------------------------- 
* Function Name                     : slo
* Input - Ouput - I/O parameters    : void - int - N/A
* Description                       : demonstrating the declaration of types 
                                      (integer, real, enumration) and the use of 
                                      operators 
* Modification Date                 : 10.10.2024
* Notes                             : 
----------------------------------------------------------------------------------- */
int slo(void)
{
    //-- d�claration possible --//
    //-- type + name ; 
    //-- type entier standart --//
    //-- sign�  
    char a = 10;         // -- 8bits / 1 byte
    short b = 10;        // -- 16bits / 2 bytes 
    int c = 10;          // -- 32bits / 4 bytes - ATTENTION : d�pend soit du processeur ou du compilateur 
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

    //-- opp�rateur -- 
    //-> affectation
    a2 = b3 = c2 = 100; // <- lecture
    
    //-> cast
    //-> cast implicite 
    a2 = b3 = c2 = 100; // a2(int8_t - 1 octet) - b3(int16_t - 2 octets) - c2(int32_t - 4 octets) - 100 (4 octets) 

    //-> cast normale 
    a2 = (int8_t)b3 = (char)c2 = (int8_t)1000; // a2(int8_t - 1 octet) - b3(int16_t - 2 octets) - c2(int32_t - 4 octets) - 100 (4 octets) 

    //-> arithm�tique 
    // addition (+)
    c = a + b; 
    a = a + b; 
    a += b; 

    //soustraction (-)
    c = a - b;
    a = a - b;
    a -= b;


    // multiplication (*) 
    c = a * b;
    a = a * b;
    a *= b;
    
    // division (/) - WARNING -> ici b ne doit pas �tre �gale � z�ro (entier ou r�el) 
    c = a / b;
    a = a / b;
    a /= b;

    // modulo (%) -> recuperation du reste - WARNING : utilsiation uniquement avec des types entiers 
    c = a % 2;  // valeur possible possible de c ?  => 0 - 1 
    c = b % 16; // valeur possible possible de c ? => 0 � 15 

    //-> logique (bit � bit) 
    // OU - OR (|)
    a = a | b; 
    a |= b; 

    // ET - AND (&)
    a = a & b;
    a &= b; 

    // OU-ECLUSIF - XOR (^)
    a = a ^ b;
    a ^= b; 

    // Inverseur - NO (~) 
    a = ~a;

    // d�calage 
    // droite ( >> ) d�calage en bit 
    // non sign� 
    a3 = (uint8_t)255; 
    a3 = a3 >> 9;  

    // sign� 
    a = (char)127; 
    a = a >> 4;

    // gauche ( << ) d�calage en bit 
    // non sign� 
    a3 = (uint8_t)255;
    a3 = a3 << 9;

    // sign� 
    a = (char)127;
    a = a << 4;

    //-- post inc�rmentationn 
    a = 10; 
    b = 1;

    c = a + b++;            

    d = a + (b++); 

    a = 10;
    b = 1;

    c = a + ++b;



    // si a faut 0 => paranth�se retourne 0 
    // si a diff�rent de 0 => parenth�se retourne 1
    if (a) {}
 
    //-> logique (test) � utiliser dans des condition => g�n�ralement avec if
    //-- Test ET/AND (&&)  -> 2 condition
    if ((a < b) && (a != b))
    {
    }

    //-- Test OU/OR (||)  -> 2 condition
    if ((a < b) || (a != b))
    {
    }

    //-- TEST inversion (!)
    if (!(a < b))
    {}


    //if(a && b == 10) // A �vit� !!!!

    //-> relationnel (test) � utiliser dans des condition => g�n�ralement avec if
    // test d'�galit� (==)
    if (a == b) 
    {

    }
    // test d'in�galit� (!=)  
    else if (a != b)
    {
    }
    // test plus petit 
    else if (a < b)
    {
    }
    // test plus petit ou �gal 
    else if (a <= b)
    {
    }
    // test plus grand 
    else if (a > b)
    {
    }
    // test plus grand ou �gal 
    else if (a >= b)
    {

    }



    switch (a)
    {
        case 10 : 
        case 100 : 
            // instruction � la valeur 10 

            break; 

        case 1000 : 
            // instrcution  li� au cas 100 

        default : 
            break; 

    }


  return(0);
}


// 1) param�tre de sortie -> uniquement un type  2) Nom de la fonction -> Camel Case 3) param�tre d'entr�e de 0 � plusieurs (un type + nom) 
e_surfaceChoice DemonstrationSlo1(int A, char B, double DD)        // soit rien mettre = void ou type nom, type nom, type nom
{
    //-- variable
    e_surfaceChoice demoEnum = square;

    A = circle; 

    //-- vos instruction 
    // -> utilisation de chapitre 3 � 6 en fonction du CDC 


    return (e_surfaceChoice)A;
}