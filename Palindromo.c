#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char paraula[40];
int longitut;
int inici = 0, fi;


int main(int argc, char *argv[])
{
	printf("introduexi la paraula:\n");
	scanf("%s",paraula);
	longitut = strlen(paraula); //agafem la longitut total de la paraula donada
	for(fi = longitut-1;paraula[fi] && fi>=0;inici++,fi--); // Bucle �nicament per anar sumant a la posici inici, anem restant a la posicio fi fins que arriba al 0 i es trenca el bucle.
	
	if(inici==longitut)
		printf("La paraula introdu�da: %s �s un palindrom\n",paraula);
	else
		printf("La paraula introdu�da: %s no �s un palindrom\n",paraula);
	
	
	
}


