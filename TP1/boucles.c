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
            if (ligne > 1 && ligne < compteur-1) { //on ne regarde pas la premiere et derniere ligne car elles ne sont composées que de *
                for (cpt_triangle = 0; cpt_triangle < ligne-1; cpt_triangle++) { //on ajoute x # avec x le numéro de la ligne -1 et on commence à ligne=2
                    printf("#");
                }
            }
            if (ligne == compteur-1) { //ajout des  x étoiles pour la dernière ligne avec x étant le numéro de la ligne -1
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
