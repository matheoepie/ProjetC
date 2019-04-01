#include "IHM.h"
#include "gestionpays.h"

void menu() {
	PAYS tab[250] = { 0 };
	chargementPays(tab);
	int choix;
	int choix2;
	int n = 0;
	do
	{
		system("cls");
		printf("1 - Afficher tous les pays\n");
		printf("2 - Jeu des capitales par pays\n");
		printf("3 - Jeu des pays par capitales\n");
		printf("4 - Les pays par lettre\n");
		printf("5 - Les N capitales les plus peuplees\n");
		printf("0 - Quitter\n");
		scanf("%d", &choix);
		system("cls");
		switch (choix)
		{
		case 1: 
			afficherListePays(tab);
			system("pause");
			break;
		case 2:
			jeuCapitale(tab);
			system("pause");
		break;
		case 3:
			jeuPays(tab);
			system("pause");
		break;
		case 4:
			paysParLettre(tab);
			system("pause");
		break;
		case 5:
			printf("Entrer le nombre de capitale afficher\n");
			scanf("%d", &choix2);
			triBulle(tab, choix2);
			system("pause");
			break;
		}

	} while (choix != 0);
}