#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;
    *b = temp;
}

int main() {
    srand(time(NULL));

    int n = 100;

    int tableau[n];

    for (int indiceInit = 0; indiceInit < n; indiceInit++) {
        tableau[indiceInit] = rand() %1000 ; //tableau[i] = rand() %RANGE_MAX ;
        printf("%d ",tableau[indiceInit]);
    }

    printf("\n\n");

    for (int indTri = 0; indTri < n-1; indTri++) { // algo de tri : Bubble short
        for (int indTri2 = 0; indTri2 < n-1 - indTri; indTri2++) {
            if (tableau[indTri2] > tableau[indTri2 + 1]) {
                swap(&tableau[indTri2], &tableau[indTri2 + 1]); // & : addresse de tableau[indTri] / tableau[indTri + 1]
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ",tableau[i]);
    }
}






// gcc -Wall -Wextra -o tri tri.c 