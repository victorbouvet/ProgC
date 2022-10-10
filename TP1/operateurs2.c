// Compilation de l'exercice 1.5 (operateurs.c) et 1.8 (operateurs2.c) étant donné qu'on réutilise le même exercice (opérateurs.c)
// Pour avoir l'exercice 1.5, il faut imposer num1 = 16 et num2 = 3

#include <stdio.h>

int main() {
    int i = 0;
    int num1 = 5;
    int num2= 2;
    char op = '*';

    switch (op) {
        case '+': ;
        printf("%i\n", num1+num2);

            break;

        case '-': ;
        printf("%i\n", num1-num2);

            break;

        case '/': ;
        printf("%i\n", num1/num2);

            break;

        case '%': ;
        printf("%i\n", num1%num2);

            break;

        case '*': ;
        printf("%i\n", num1*num2);

            break;

        case '&': ;
        printf("%i\n", num1&num2);

            break;

        case '|': ;
        printf("%i\n", num1|num2);

            break;
    }
}

/* facile */
