#include <stdio.h>

int main() {
    int compteur = 5;
    int ligne = 0;
    int cpt_triangle = 0;
    if (compteur < 5){
        printf("compteur trop court");
    }
    else {
        for (ligne = 0; ligne < compteur; ligne++) {
            printf("\n*");
            if (ligne > 1 && ligne < compteur-1) {
                for (cpt_triangle = 0; cpt_triangle < ligne-1; cpt_triangle++) {
                    printf("#");
                }
            }
            if (ligne == compteur-1) {
                for (cpt_triangle = 0; cpt_triangle < ligne-1; cpt_triangle++) {
                    printf("*");
                }
            }
            if (ligne >= 1) printf("*");
        }
    }
    printf("\n\n");
}

/* ultra chaud */