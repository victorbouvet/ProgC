#include <stdio.h>

int main() {
    int i = 0;

    char operation = 2;

    switch (operation) {
        case 0: ;
            int division1 = 2;
            int division2 = 15;

            for (i=0; i<1000; i++) {
                if (i%division1 == 0 && i%division2 == 0) {
                printf("%i\n",i);
                }
            }

            break;

        case 1: ;
            int division3 = 103;
            int division4 = 107;

            for (i=0; i<1000; i++) {
                if (i%division3 == 0 || i%division4 == 0) {
                printf("%i\n",i);
                }
            }

            break;

        case 2: ;
            int division5 = 7;
            int division6 = 5;
            int notdivision = 3;

            for (i=0; i<1000; i++) {
                if ((i%division5 == 0 || i%division6 == 0) && i%notdivision != 0) {
                printf("%i\n",i);
                }
            }

            break;

    }
}

/* Syntaxe du switch case qui faisait des bugs ( case : ; / pas les memes variables pour chaque case) */
