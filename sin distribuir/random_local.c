/* Programa random_local.c que incluye unicamente el programa main */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "random_local.h"

int main(int argc, char *argv[]){
	int misemilla, itera, i;
	char *host;
 	CLIENT *clnt;
	 if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	printf("digite la semilla: ");
	scanf("%d",&misemilla);
	printf("\ndigite el numero de iteraciones: ");
	scanf("%d",&itera);
	inicializa_random(misemilla);
		for(i = 0; i < itera; i++)
			printf("%d : %f\n", i, obtiene_siguiente_random());
	host = argv[1];
	clnt = clnt_create (host, RAND_PROG, RAND_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
	clnt_destroy (clnt);
	exit(0);
}