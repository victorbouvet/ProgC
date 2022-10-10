#include <stdio.h>

int main() {
    char nom[5] = ["Maxime", "Victor", "Paul", "Alain", "Delon"];
    char prenom[5] = ["a","b","c","g","e"];
    char adresse[5] = ["12","u","iug","ub","uh"};
    char note1[5] = {"j","h","h","iu","h"};
    char note2[5] = {"j","h","h","iu","h"};

    int i;

    for (i=0;i<5;i++) {
        printf("%s %s %s %s %s",*(nom+i),*(prenom+i),*(adresse+i),*(note1+i),*(note2+i));
}
