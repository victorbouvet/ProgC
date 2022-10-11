#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int taille = 10; // taille des tableaux

    int tableauInt[taille];
    float tableauFloat[taille];

    srand(time(NULL));

    printf("tableau int avant: ");
    
    for (int i =0; i<taille; i++) { //remplir les tableaux de valeurs aléatoires
        tableauInt[i] = rand() %100;
        printf("%d ", tableauInt[i]);
    }

    printf("\n");


    printf("tableau float après: ");

    for (int i =0; i<taille; i++) { //remplir les tableaux de valeurs aléatoires
        tableauFloat[i] = rand() %100;
        printf("%f ", tableauFloat[i]);
    }

    printf("\n");

    for (int i=0; i<taille; i++) {
        if (i%2 == 0) { //test si indice divisible par 2
            *(tableauInt+i) = *(tableauInt+i)*3;
            *(tableauFloat+i) = *(tableauFloat+i)*3;
        }
    }

    printf("tableau int après: ");

    for (int i=0; i<taille; i++) {
        printf("%d ", tableauInt[i]);
    }

    printf("\n");

    printf("tableau float après : ");

    for (int i=0; i<taille; i++) {
        printf("%f ", tableauFloat[i]);
    }

}