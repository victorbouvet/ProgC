#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define NUMS_TO_GENERATE 100



int main() {
    int tableau[NUMS_TO_GENERATE];;

    int valeur = 0;
    int cpt = 0;
    srand(time(NULL));
    
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        int n = rand() % SIZE; //génère un entier aléatoire compris entre 0 et 100
        tableau[i] = n; //place cet entier dans le tableau à l'indice i
        //printf("%d\n",tableau[i]);
    
        if (tableau[i] == valeur){ //comparaison de chaque valeur dans le tableau avec la valeur de référence
            cpt +=1; //compteur pour compter le nombre de fois que la valeur est dans le tableau
        } 
    }

    if (cpt > 0){
        printf("entier présent %d fois\n ",cpt);
    }
}