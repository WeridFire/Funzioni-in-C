#ifndef funzioni
#include <stdio.h>
#include <stdlib.h>





void visualizza_vettore(int *vettore, int dimensione){
	int i;
	for (i = 0; i < dimensione; i++){
		printf("%d ", *(vettore+i));
	}
}
void acquisisci_vettore(int *vettore, int dimensione){
	int i;
	for (i = 0; i < dimensione; i++){
		printf("\nInserire l'intero in posizione %d:  ", i+1);
		scanf("%d", vettore+i);
	}
}

int * alloca_vettore(int dimensione){
	int *vettore;
	vettore = malloc(sizeof(int)*dimensione);
	if (vettore){
		printf("Vettore allocato con dimensione %d\n", dimensione);
		return vettore;
	}
	else{
		printf("Errore. Allocazione non avvenuta.\n");
		return NULL;
	}
}

int **alloca_matrice(int righe, int colonne){
	int **matrice;
	int i;

	matrice = malloc(sizeof(int *)*righe);
	if (matrice){
		for (i = 0; i < colonne; i++){ 
			*(matrice+i) = malloc(sizeof(int)*colonne);
		}
		printf("\nE' stata allocata dinamicamente una matrice con %d righe e %d colonne.\n", righe, colonne);
		return(matrice);
	}


}
void acquisisci_matrice(int **matrice, int righe, int colonne){
	int i; 
	int j;

	for (i = 0; i < righe; i++){
		for(j = 0; j < colonne; j++){
			printf("Inserire l'interno su in posizione [%d][%d]", i+1, j+1);
			scanf("%d", (*(matrice+i)+j)); 
		}
	}
}
void visualizza_matrice(int **matrice, int righe, int colonne){
	int i;
	int j;

	for (i = 0; i < righe; i ++){
		for (j = 0; j < colonne; j++){
			printf(" %d ", *(*(matrice+i)+j));
		}
		printf("\n");
	}
}



#endif 