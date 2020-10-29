/**
 * \file main.c
 * \brief Programme de tests.
 * \author Harut
 * \version 3.0
 *
 * Ce programme permet de tester le makfile, le doxygene et le git
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dichotomy.h"


/**
 * \fn void fonction_Dichotomy()
 * \brief Fonction dichotomy
 */
void fonction_Dichotomy() {

	printf("\nValeurs : ");
	int array[20];
	for (int i = 0; i < 20; i++) {
		array[i] = i*i;
		printf(" %d", array[i]);
	}

	int value = 169;

	printf("\n");
	printf("valeur voulue : %d", value);

	int resultat = find_by_dichotomy(array, 20, value);

	printf("\n");
	printf("Rang de la valeur voulut : %d\n\n", resultat);

}

/**
 * \fn int main (void)
 * \brief Entrée du programme.
 *
 * \return EXIT_SUCCESS - Arrêt normal du programme.
 */
int main(void) {

	fonction_Dichotomy();

	return EXIT_SUCCESS;
}