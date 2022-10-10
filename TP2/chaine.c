#include <stdio.h>

int nbreChar(char *chaine) {
    int i=0;
    while(1){
        //if (chaine[i]!='\0') { nouvelle notation
        if (*(chaine+i)!='\0') {
            i++;
        } else {
           return i; 
        }
    }
    //printf("%i\n",i);
}

int copieChar() {
    int i;
    int max;
    char copie[] = "123456789";
    char chaine[] = "Abc";
    max = nbreChar(chaine);

    for (i=0; i<max; i++) {
        //printf("%i\n",i);
        copie[i] = chaine[i];
    }

    printf("%s\n", copie);
}

int concatenation() {
    int i;
    int max1;
    int max2;

    char chaine1[] = "adzad";
    char chaine2[] = "123";

    max1 = nbreChar(chaine1);
    max2 = nbreChar(chaine2);

    for (i=0;i<max1; i++){
        chaine1[i+max1] = chaine2[i];
    }
    printf("%s\n",chaine1);
}

int main() {
    printf("Nbre de caractères : %i\n",nbreChar("AAA"));
    copieChar();
    concatenation();
}


/*
#include <stdio.h>

int nbreChar(char *chaine) {
    int i=0;
    while(1){
        //if (chaine[i]!='\0') { nouvelle notation
        if (*(chaine+i)!='\0') {
            i++;
        } else {
           return i; 
        }
    }
    //printf("%i\n",i);
}

int copieChar(char *chaine, char *copie) {
    int i;
    int max = nbreChar(chaine);

    for (i=0; i<max; i++) {
        //printf("%i\n",i);
        copie[i] = chaine[i];
    }

    return copie[i];
}

int main() {
    printf("%i",nbreChar("AZDAZDZADADAZAEFEF"));
    printf("%s",copieChar("AZDAZDZADADAZAEFEF","123456"));
}

*/