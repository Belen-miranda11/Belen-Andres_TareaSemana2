#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#define FIL 7
#define COL 7
#define MAX 50
using namespace std;

int main(int argc, char* argv[]) {

	int matriz[FIL][COL] = { 0 }; //inicializacion de matriz
	int* matriz2[FIL][COL] = { NULL };  //inicializacion de matriz
	int fil1 = 0, col1 = 0;	//inicializacion de variables
	int i = 0, j = 0, k = 0, w = 0; //inicializacion de variables



	do {
		printf("Introduzca la dimension: "); //muetras mensaje para indicar la dimension de la matriz
		scanf("%d", &fil1);
	} while (fil1 <= 0 || fil1 > FIL); //ciclo para la dimension

	col1 = fil1;

	for (i = 0; i < fil1; i++) {        //ciclo para recorrer la matriz por fila
		for (j = 0; j < col1; j++) {	//ciclo para recorrer la matriz por columna
			do {
				printf("Introduzca el elemento [%d %d]: ", i + 1, j + 1); 
				scanf("%d", &matriz[i][j]);  //recibe el dato para ingresar a matriz
			} while (matriz[i][j] <= 0 || matriz[i][j] > MAX); //ciclo de posicionamiento
		}
	}

	k = 0;	//inicializacion
	w = 0;

	for (j = 0; j < fil1; j++) {  //ciclo para recorrer la fila
		for (i = fil1 - 1; i >= 0; i--) { //ciclo para reposicionar en fila
			matriz2[k][w] = &matriz[i][j];
			w++;

		}
		k++;
		w = 0;
	}

	for (i = 0; i < fil1; i++) { //ciclo para recorrer la fila
		for (j = 0; j < col1; j++) { //ciclo para reposicionar en columna
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < fil1; i++) { //ciclo para recorrer la fila
		for (j = 0; j < col1; j++) { //ciclo para reposicionar en columna
			printf("%d ", *matriz2[i][j]);
		}
		printf("\n");
	}

	return 0;
}