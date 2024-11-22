/*---------------------------------------------------------------------------------- -//
// Projet Name 			: SolusQ6_decoupageInfo
// File Name 			: demoCode_franeCutting.c
// Creation Date 		: 30.10.2024
// Modification Date	: 12.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.3
//
// Description          : source file including the function declaration to the Q6 
//						  test 
//
// Remarks				: complet programm
//----------------------------------------------------------------------------------*/
//-- Standard libraries delcaration--//
#include <stdint.h>		//-- standard library of integer 
#include <stdio.h>		//-- for the Input-Ouput system 

//-- personnal librairies declaration --// 
#include "testFunctions.h"

/* -----------------------------------------------------------------------------------
* Function Name                     : ClearBufferKeyBoard
* Input - Ouput - I/O parameters    : => 
									  => integer 
									  => N/A
* Description                       : clear the Buffer KeyBoard 
* Modification Date                 : 08.11.2024
* Notes                             : https://www.tutorialspoint.com/c_standard_library/c_function_getchar.htm
----------------------------------------------------------------------------------- */
int8_t ClearBufferKeyBoard()
{
	//-- variable declarations --// 
	char receiveCharcter;

	//-- loop to clear the buffer linked at the keyboard --// 
	do 
	{
		//-- keyboard buffer reading --//  
		receiveCharcter = getchar();
	} while (receiveCharcter != '\n');

	return(0); //-> 0 indicates that the buffer is empty  
}


/* -----------------------------------------------------------------------------------
* Function Name                     : AssembyDatas
* Input - Ouput - I/O parameters    : => 4x input : 
*										voltageData		(Integer - 1bytes)
*										currentData		(Integer - 1bytes)
*										powerData		(Integer - 1bytes)
*										resistorData	(Integer - 1bytes)
									  => 1x ouput : 
										frame (Integer - 4bytes)
									  => N/A
* Description                       : Q6 solution, assembly of 4 bytes in an only 
									  variable
* Modification Date                 : 12.11.2024
* Notes                             : there may be two variants for this function
*									  only one of which is implemend
----------------------------------------------------------------------------------- */
int AssembyDatas(int8_t voltageData, int8_t currentData, int8_t powerData, int8_t resistorData)
{
	//-- variable declarations --// 
	int frame, middleFrame; 

	//-- preparation of frame --// 
	//-- variant 1) LSB on right 
	frame = (voltageData << 24) & 0xFF000000;			// unwrapping of 24bits and masking -> MSB part 	
	middleFrame = (currentData << 16) & 0x00FF0000; 
	frame = frame | middleFrame;						// update datas with voltage and cuurent   
	middleFrame = (powerData << 8) & 0x0000FF00; 
	frame = frame | middleFrame;						// update datas with voltage, current and power 
	middleFrame = resistorData & 0x000000FF; 
	frame = frame | middleFrame;						// update datas with voltage, current, power, resistor 
	
	//-- variante 2) LSB on left
	/*
	frame = (resistorData << 24) & 0xFF000000;			// unwrapping and masking -> MSB part 	
	middleFrame = (powerData << 16) & 0x00FF0000; 
	frame = frame | middleFrame;						// update datas with voltage and cuurent   
	middleFrame = (currentData << 8) & 0x0000FF00; 
	frame = frame | middleFrame;						// update datas with voltage, current and power 
	middleFrame = voltageData & 0x000000FF; 
	frame = frame | middleFrame;						// update datas with voltage, current, power, resistor 
	*/
	
	return frame; 
}


/* -----------------------------------------------------------------------------------
* Function Name                     : DatasCutting
* Input - Ouput - I/O parameters    : => 1x input : 
										frame (Integer - 4bytes)  
									  => 0 output :  
									  => N/A
* Description                       : Q6 solution, divinding frame into 4 parts 
* Modification Date                 : 14.11.2024
* Notes                             : there may be two variants for this function 
*									  only one of which is implemend
----------------------------------------------------------------------------------- */
void DatasCutting(int frame)
{

	//-- display the different frame value --//
	printf("-- valeur voltage :  \n", );
	printf("-- valeur current : \n", );
	printf("-- valeur power :  \n", );
	printf("-- valeur resistor :  \n", );
}