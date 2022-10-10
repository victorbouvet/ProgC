#include <stdio.h>

int puissance(int n, int p) {
    int i;
    int tableau[20];
    tableau[0] = n;
    for (i=1;i<p;i++) {
        tableau[i] = tableau[i-1]*n;
    }
    return tableau[p-1];
}

int main(){
    int num1, num2;
    printf("Numéro 1 : ");
    scanf("%i",&num1);
    printf("Numéro 2 : ");
    scanf("%i",&num2);
    printf("%i\n",puissance(num1,num2));
}




