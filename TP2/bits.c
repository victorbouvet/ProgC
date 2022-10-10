#include <stdio.h>

int conversion_binaire() {
    int variable;
    int i;
    int max = 32;
    int tab_binaire[max];
    int cpt = 0;
    int tableau[max];

    printf("Entrez un nombre décimal : ");
    scanf("%d", &variable);

    int reste = variable;

    for(i=0; i<max; i++) {
        tab_binaire[i] = reste%2;
        reste = reste/2;
        cpt = cpt+1;
    }

    for(i=cpt-1;i>=0;i--) {
        tableau[i] = tab_binaire[i];
        printf("%i", tableau[i]);
    }
    
    printf("\n"); 
    //printf("%i", tableau[0]); //Test

    if (tableau[28] == 1 && tableau[12] == 1) { //32-4 = 28 && 32-20=12
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    printf("%i\n",conversion_binaire());
}