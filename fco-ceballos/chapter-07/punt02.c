/* Escribir los valores de una matriz.
 * Versión con aritmética de punteros.
/* punt02.c
 */

#include <stdio.h>

void main()
{
	int lista[] = { 24, 30, 15, 45, 34 };
	int ind;
	int *plista = &lista[0];

	for ( ind = 0; ind < 5; ind++ )
		printf( "%d  ", *( plista + ind ) ); // equivalente a plista[ ind ]
}
