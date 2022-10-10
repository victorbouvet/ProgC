#include <stdio.h>

int conversion_binaire() {
    int variable;
    int i;
    int max = 100;
    int tab_binaire[max];
    int cpt = 0;

    printf("Entrez un nombre décimal : ");
    scanf("%d", &variable);

    int reste = variable;

    for(i=0; reste != 0; i++) {
        tab_binaire[i] = reste%2;
        reste = reste/2;
        cpt = cpt + 1;
    }

    for(i=cpt-1;i>=0;i--) {
        printf("%d",tab_binaire[i]);
    }

    printf("\n");
}
