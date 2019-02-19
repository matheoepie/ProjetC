#ifndef GESTIONPAYS
#define GESTIONPAYS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "chaine.h"
typedef struct {
	int id;
	unsigned char nom[100];
	unsigned char capitale[100];
	int populationCapitale;
}PAYS;
int strnicmp(char *chaine1[], char *chaine2[], int maxlen);
#endif;