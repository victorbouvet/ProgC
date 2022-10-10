#include <stdio.h>

int fibonacci(int n) {
    int i;
    int tableau[20];
    tableau[0] = 0;
    tableau[1] = 1;
    printf("%i\n", tableau[0]);
    printf("%i\n", tableau[1]);
    for (i=2;i<n;i++) {
        tableau[i] = tableau[i-1] + tableau[i-2];
        printf("%i\n", tableau[i]);
    }
}

int main(){
    int num;
    printf("Taille de la suite : ");
    scanf("%i",&num);

    fibonacci(num);
}

