/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *
suma_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->Numero1+argp->Numero2;
	printf("Se selecciona la opcion de suma: \n");
	printf("El resultado de la suma de los dos numeros es: %d\n",result);
	return &result;
}

int *
resta_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->Numero1-argp->Numero2;
	printf("Se selecciona la opcion de resta: \n");
	printf("El resultado de la resta de los dos numeros es: %d\n",result);

	return &result;
}

int *
division_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->Numero1/argp->Numero2;
	printf("Se selecciona la opcion de division: \n");
	printf("El resultado de la divsion de los dos numeros es: %d\n",result);

	return &result;
}

int *
multipli_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->Numero1*argp->Numero2;
	printf("Se selecciona la opcion de multiplicacion: \n ");
	printf("El resultado de la multiplicacion de los dos numeros es: %d\n",result);

	return &result;
}