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
		chaine1 = *chaine1[i];
		chaine2 = *chaine2[i];
		if (chaine1 >= 65 && chaine1 <= 90)
			chaine1 += 32;
		if (chaine2 >= 65 && chaine2 <= 90)
			chaine2 += 32;
		i++;

	} while (chaine1 != '\0' && chaine2 != '\0' && chaine1 == chaine2);

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
	int TopScoreInt = 0;
	char ScoreString[100];

	char chaine[25];
	char TopScore[100];
	char UserName[100];
	char TopPlayer[100];

	srand((unsigned int)time(NULL));
	FILE * fichier = NULL;


	printf("Quel est ton nom champion ?");
	scanf("%s", UserName);
	TopScoreInt = atoi(TopScore);

	fichier = fopen("JeuCapital.txt", "r");
	fgets(TopScore, fichier, 100);
	fgets(TopPlayer, fichier, 100);


	while (i <= 192) {

		b = rand() % 192;
		printf("%s\n", (pPays + b)->nom);
		printf("Entrez les trois premieres lettres de la capitale :\n");

		scanf("%s", chaine);
		if (_strnicmp((pPays + b)->capitale, chaine, 3) == 0) {
			system("cls");
			printf("Bien jouer\n");
			score++;
		}
		else {
			system("cls");
			i = 192;
			printf("Dommage\n");
			printf("Votre score est %d\n", score);
		}
		i++;

	}
	if (score > TopScoreInt)
	{
		_itoa(score, ScoreString, 100);
		FILE* fichier = NULL;
		fichier = fopen("JeuCapital.txt", "w");

		if (fichier != NULL)
		{
			fputs(UserName, fichier);
			fputs("\n", fichier);
			fputs(ScoreString, fichier);
			fclose(fichier);
		}
	}
	
	return score;
}
//Jeu des pays
int jeuPays(PAYS *pPays) {
	int i = 0;
	int b = 0;
	int score = 0;
	char chaine[25];
	srand((unsigned int)time(NULL));
	char TopScore[100];
	char UserName[100];
	FILE * fichier = NULL;
	
	char TopPlayer[100];
	int TopScoreInt = 0;
	char ScoreString[100];


	printf("Quel est ton nom champion ?");
	scanf("%s", UserName);
		TopScoreInt = atoi(TopScore);
		fichier = fopen("JeuPays.txt", "r");
		fgets(TopScore, fichier, 100);
		fgets(TopPlayer, fichier, 100);

	while (i <= 192) {
		b = rand() % 192;
		printf("%s\n", (pPays + b)->capitale);
		printf("entrez les trois premiere lettre de la pays :\n");
		scanf("%s", chaine);

		if (_strnicmp((pPays + b)->nom, chaine, 3) == 0) {
			printf("Bien jouer\n");
			score++;
		}
		else {
			i = 192;
			printf("Dommage\n");
			printf("Votre score est %d\n", score);
		}
		i++;

	}
	if (score > TopScoreInt)
	{
		_itoa(score, ScoreString, 100);

		FILE* fichier = NULL;
		fichier = fopen("JeuPays.txt", "w");
		if (fichier != NULL)
		{
			fputs(UserName, fichier);
			fputs("\n", fichier);
			fputs(ScoreString, fichier);
			fclose(fichier);
		}
	}
	return score;
}


void triBulle(PAYS *ptab, int nPays)
{
	int i = 0;
	int a = 0;	
	PAYS p;
	PAYS liste;

	while ((ptab + i)->id != 0)
	{
		if((ptab + i)->populationCapitale<(ptab + i+1)->populationCapitale){
			liste = ptab[i];
			ptab[i] = ptab[i + 1];
			ptab[i + 1] = liste;
			i = 0;

		}
		i++;

	}
	while (a < nPays) {
		p = *(ptab + a);
		printf("%d %s %s %d\n", p.id, p.capitale, p.nom, p.populationCapitale);
		a++;
		}
	}


//Recherche pays par lettre
void paysParLettre(PAYS *pTab) {
	int gestionAccent(char* pchar);
	int i = 0, j = 0, statut, saisie, gestionAccent(char* pchar);
	char premiereLettre[20] = { 0 }, retourPays[20] = { 0 }, rep;
	PAYS p;
	
	FormatAccent(premiereLettre);
	do
	{
		printf("Choisissez la première lettre :\n");
		scanf("%s", premiereLettre);

		saisie = atoi(premiereLettre);

		if (saisie != 0 || premiereLettre[1] != 0)
		{
			printf("Le caractère n'est pas pris en compte. Veuillez entrer une lettre :\n");
		}

	} while (saisie != 0 || premiereLettre[1] != 0);


	while ((pTab + j)->id != 0) {
		p = *(pTab + j);
		retourPays[0] = (pTab + j)->nom[0];
		FormatAccent(retourPays);
		gestionAccent(retourPays);
		rep =_strnicmp(retourPays, premiereLettre, 1);

		if (rep == 0)
		{
			printf("%s  (%d)\n", p.nom, p.populationCapitale);
		}

		j++;
	}
}