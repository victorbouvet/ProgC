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
