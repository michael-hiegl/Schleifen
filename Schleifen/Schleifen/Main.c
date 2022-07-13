//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Schleifen	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 07.12.2021 20:12:34
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int x = 0;



	//Code
	for (x = 1; x <= 10; x = x + 1)
	{
		printf("Schon %i mal gelaufen\n",x);
		if (x == 5)
		{
			printf("Haelfte geschafft\n");
		}
	}

	printf("Fertig\n");



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}