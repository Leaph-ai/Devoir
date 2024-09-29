#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbole;
	int nombre1;
	int nombre2;
	double resultat = 0;


	printf("Bienvenue dans la mini calculatrice\n");

	printf("Choississez un operateur\n");
	scanf(" %c", &symbole);

	printf("choississez un premier nombre\n");
	scanf("%d", &nombre1);

	printf("choississez un second nombre\n");
	scanf("%d", &nombre2);

	if(symbole == '+'){
		
		resultat = nombre1 + nombre2;
		printf("%d %c %d = %.2f\n", nombre1, symbole, nombre2, resultat);

	}

	else if(symbole == '-'){

		resultat = nombre1 - nombre2;
		printf("%d %c %d = %.2f\n", nombre1, symbole, nombre2, resultat);

	}

	else if(symbole == '%'){

		if(nombre2 == 0){

			printf("il est impossible de faire le modulo de 0\n");
			return 0;
		}

		resultat = nombre1 % nombre2;
		printf("%d %c %d = %.0f\n", nombre1, symbole, nombre2, resultat);

	}

	else if(symbole == '*'){

		resultat = nombre1 * nombre2;
		printf("%d %c %d = %.2f\n", nombre1, symbole, nombre2, resultat);


	}

	else if(symbole == '/'){

		if(nombre2 == 0){

			printf("il est impossible de diviser par 0\n");
			return 0;
		}

		resultat = (double)nombre1 / nombre2;
		printf("%d %c %d = %.2f\n", nombre1, symbole, nombre2, resultat);
		
	} 

	else {

		printf("Le symbole n'est pas reconnu\n");
	}

	return 0;	
}