#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char peticion [80];
	strcpy (peticion,"3/Biel/19/1.87");
	int codigo;
	char nom [20];
	int edat;
	float altura;
	
	char *p = strtok (peticion,"/");
	codigo = atoi (p);
	p = strtok(NULL,"/");
	strcpy(nom,p);
	p = strtok(NULL,"/");
	edat = atoi(p);
	p = strtok(NULL,"/");
	altura = atof(p);
	
	printf("Codi: %d, nom: %s, edat: %d, al�ada: %f\n",codigo,nom,edat,altura);
	char respuesta [80];
	if (edat>18)
		sprintf(respuesta,"%s �s major d'edat perqu� t� %d anys",nom,edat);
	else 
		sprintf(respuesta,"%s no �s major d'edat",nom);
	
	printf("Resposta: %s\n",respuesta);
}

