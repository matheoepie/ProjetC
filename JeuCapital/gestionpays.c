 #include "gestionpays.h"
 #include <time.h>

void chargementPays(PAYS * pPays) {
	char c;
	int i = 0;
	int k = 0;
	int col = 0;
	int Case = 0;
	char temp[300];
	char ligne[300] = "";
	char nom[100];
	char capitale[100];
	int id;
	int pop;
	int r;
	FILE * curseur = fopen("pays.csv", "r");
	if (curseur != NULL) {
		while (fgets(ligne, 300, curseur) != NULL) {
			i = 0;
			col = 0;
			while (ligne[i] != '\0') {
				
				if (ligne[i] == ';' || ligne[i] == '\n') {
					temp[k] = '\0';
					switch (col)
					{
					case 0:	
						id = atoi(temp);
						break;
					case 1:
						strcpy(capitale, temp);
						
						break;
					case 2:
						strcpy(nom, temp);
						break;
					case 3:
						pop = atoi(temp);
						(pPays + Case)->id = id;
						(pPays + Case)->populationCapitale = pop;
						FormatAccent(capitale);
						FormatAccent(nom);
						strcpy((pPays + Case)->nom, nom);
						strcpy((pPays + Case)->capitale, capitale);
						Case++;
						break;
					}
					col++;
					k = 0;
				}
				else {
					temp[k] = ligne[i];
					k++;
				}
				i++;
			}
		}
		

		/*do {
			c = fgetc(curseur);
			printf("%c", c);
		} while (c != EOF);
		system("pause");
		fclose(curseur);*/
	}
	else {
		printf("Ouverture du fichier pays.csv impossible !\n");
	}


	//(pPays + i)->id = 1;
	////(pPays + i)->nom = "FRANCE";
	//strcpy((pPays + i)->nom, "FRANCE");
	//strcpy((pPays + i)->capitale, "Paris");
	//(pPays + i)->populationCapitale = 12125555;

	//i++;
	//(pPays + i)->id = 2;
	////(pPays + i)->nom = "FRANCE";
	//strcpy((pPays + i)->nom, "MAROC");
	//strcpy((pPays + i)->capitale, "Rabat");
	//(pPays + i)->populationCapitale = 1100123;

	//i++;
	//(pPays + i)->id = 3;
	////(pPays + i)->nom = "FRANCE";
	//strcpy((pPays + i)->nom, "BELGIQUE");
	//strcpy((pPays + i)->capitale, "Bruxelles");
	//(pPays + i)->populationCapitale = 1200568;
}

void afficherListePays(PAYS * pTab) {
	int i = 0;

	/*while ((pTab + i)->id != 0) {
		printf("%d - %s - %s(%d)", (pTab + i)->id, (pTab + i)->nom, (pTab + i)->capitale, (pTab + i)->populationCapitale);
		i++;
	}*/
	PAYS p;
	while ((pTab + i)->id != 0) {
		p = *(pTab + i);
		printf("%d - %s - %s (%d)\n", p.id, p.nom, p.capitale, p.populationCapitale);
		i++;
	}

}


int strnicmp(char *chaine1[], char *chaine2[], int maxlen) {
	int i = 0;
	char c1;
	char c2;

	do {
		c1 = *chaine1[i];
		c2 = *chaine2[i];
		if (c1 >= 65 && c1 <= 90)
			c1 += 32;
		if (c2 >= 65 && c2 <= 90)
			c2 += 32;
		i++;
	} while (c1 != '\0' && c2 != '\0' && c1 == c2);
	 i = 0;
	while (chaine1[i] == chaine2[i] && chaine1[i] != '\0' && chaine2[i] != '\0' && i < maxlen) {
		i++;
	}
	return chaine2[i] - chaine1[i];
}

//Jeu des capitales
int jeuCapitale(PAYS *pPays) {
	int i = 0;
	int b = 0;
	int score = 0;
	char chaine[25];
	srand((unsigned int)time(NULL));
	while (i <= 192) {
		b = rand() % 192;
		printf("%s\n", (pPays + b)->nom);
		printf("entrez les trois premiere lettre de la capitale :\n");
		scanf("%s", chaine);
		if (_strnicmp((pPays + b)->capitale, chaine, 3) == 0 ) {
			printf("Bien jouer\n");
			score++;
		}
		else {
			i = 192;
			printf("Dommage\n");
			printf("Votre score est %d", score);
		}
		i++;
	}
	return score;
}