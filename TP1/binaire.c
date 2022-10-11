#include <stdio.h>
#include <string.h>

int main() {
    int variable;
    int i;
    int max = 1000;
    int tab_binaire[max];
    int cpt = 0;

    printf("Entrez un nombre décimal : ");
    scanf("%i", &variable);

    int reste = variable;

    for(i=0; reste != 0; i++) { //boucle for pour faire des divisions euclidiennes (conversion décimale > binaire)
        tab_binaire[i] = reste%2;
        reste = reste/2;
        cpt = cpt + 1;
    }

    for(i=cpt-1;i>=0;i--) { //décrémentation car l'ordre de la conversion est inversée (lire de la fin vers le début de la 1ere boucle)
        printf("%d",tab_binaire[i]);
    }

    printf("\n");
}

/* plutôt simple une fois qu'on a pensé au modulo et reste */
/* au départ : oubli du compteur et affichage des 1000 valeurs dans la mémoire avec à la fin la valeur binaire (C'EST CORRIGE) */
