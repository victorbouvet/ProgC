#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int tableau[100];

    int grand = 0;

    int petit = 100;

    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() %1000 ; //tableau[i] = rand() %RANGE_MAX ;

        if (tableau[i] > grand) grand = tableau[i];
        if (tableau[i] < petit) petit = tableau[i];
    }

    printf("plus grande valeur : %d\n", grand);
    printf("plus petite valeur : %d\n", petit);


}