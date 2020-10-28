/**
 * \file dichotomy.c
 * \brief Programme de dichotomy
 * \author Harut
 * \version 1.0
 *
 * Ce programme permet de trouver le rang du nombre passé en paramètre
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "dichotomy.h"

/**
 * \fn int find_by_dichotomy(int array[], int size_t, int value)
 * \brief Fonction qui permet de trouver un chiffre avec la methode de dichotomy
 *
 * \param array Un tableau rangé dans l'ordre croissant
 * \param size_t La taille du tableau
 * \param value La valeur que l'on cherche dans le tableau
 * \return Retourne le rang du valeur recherché
 */
int find_by_dichotomy(int array[], int size_t, int value) {

	size_t = size_t - 1;
	int sizeTampon = 0;
	int MaxSize = size_t;	// Index de fin
	int MinSize = 0;		// Index de debut
	int boucle = 0;			// Pour mettre fin au boucle

	while (boucle != 1) {
		size_t /= 2;
		if (array[size_t] == value) {
			boucle = 1;
			return size_t;
		}

		// Si la valeur du milieu est superieur a la valeur souhaitee
		if (array[size_t] > value) {
			MaxSize = MaxSize / 2;
		}

		// Si la valeur du milieu est inferieur a la valeur souhaitee
		if (array[size_t] < value) {

			sizeTampon = size_t;
			size_t = MinSize + MaxSize + size_t;
			MinSize = sizeTampon;
		}

	}
}
