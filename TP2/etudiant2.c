#include <stdio.h>
#include <string.h>

int main() {

    struct etudiant{
        char prenom[100];
        char nom[100];
        char adresse[100];
        short note1;
        short note2;
    };

    struct etudiant test[5];

    strcpy(test[0].prenom,"Victor");
    strcpy(test[0].nom,"Bouvet");
    strcpy(test[0].adresse,"2 rue Edouard Heriot");
    test[0].note1 = 18;
    test[0].note2 = 13;

    strcpy(test[1].prenom,"Maxime");
    strcpy(test[1].nom,"Prudhon");
    strcpy(test[1].adresse,"5 avenue Gaston Berger");
    test[1].note1 = 15;
    test[1].note2 = 11;

    strcpy(test[2].prenom,"Paul");
    strcpy(test[2].nom,"Moreau");
    strcpy(test[2].adresse,"12 rue de Matignon");
    test[2].note1 = 13;
    test[2].note2 = 7;

    strcpy(test[3].prenom,"Alain");
    strcpy(test[3].nom,"Delon");
    strcpy(test[3].adresse,"89D boulevard des champs élysées");
    test[3].note1 = 10;
    test[3].note2 = 14;

    strcpy(test[4].prenom,"Jack");
    strcpy(test[4].nom,"Sparrow");
    strcpy(test[4].adresse,"5 avenue du rhum");
    test[4].note1 = 20;
    test[4].note2 = 18;

    for (int i=0;i<4;i++) {
        printf("%s %s, %s | ProgC : %d/20, BSE : %d/20 \n", test[i].prenom, test[i].nom, test[i].adresse, test[0].note1, test[0].note2);
    }

}