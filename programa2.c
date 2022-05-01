/*
 ============================================================================
 Name        : programa2.c
 Author      : javier
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{

	int edad;
	int peso;
	char letra;
	int respuesta;
	respuesta = utn_getCaracter(&letra,"Letra?\n","Error la Letra debe ser desde A hasta J\n",'A','J',1);
	if(respuesta == 0)
	{
		printf("La letra es: %c\n",letra);
	}
	else
	{
		printf("\nError");
	}
	respuesta = utn_getNumero(&edad,"Edad?\n","Error la edad debe ser desde 0 hasta 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d\n",edad);
	}
	else
	{
		printf("\nError");
	}
	respuesta = utn_getNumero(&peso,"Peso?\n","Error la Peso debe ser desde 0 hasta 500\n",0,500,3);
		if(respuesta == 0)
		{
			printf("El peso es: %d\n",peso);
		}
		else
		{
			printf("\nError");
		}
	return EXIT_SUCCESS;
}
