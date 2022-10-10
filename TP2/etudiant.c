#include <stdio.h>

int main() {
    char prenom[5][100] = {"Victor", "Maxime", "Paul", "Alain","Jack"};
    char nom[5][100] = {"Bouvet","Prudhon","Moreau","Delon","Sparrow"};
    char adresse[5][100] = {"12 rue Edouard Heriot","15 avenue Gaston Berger","12 rue de Matignon","89D boulevard des champs élysées","5 avenue du rhum"};
    char note1[5][100] = {"18","15","13","10","20"};
    char note2[5][100] = {"13","11","7","14","18"};

    int i;

    for (i=0;i<5;i++) {
        printf("%s %s, %s | Note en ProgC : %s/20, Note en BSE :  %s/20 \n\n",*(prenom+i),*(nom+i),*(adresse+i),*(note1+i),*(note2+i));
        //ou sinon 
        //printf("%s %s, %s | Note en ProgC : %s/20, Note en BSE :  %s/20 \n\n",prenom[i],nom[i],adresse[i],note1[i],note2[i]);
    }
}
