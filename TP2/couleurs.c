#include <stdio.h>
#include <stdlib.h>

int main() {

    int nbreCouleur = 10;

    struct couleur {
        int rouge;
        int bleu;
        int vert;
        };

    typedef struct couleur delacouleur;

    delacouleur rgb[nbreCouleur];

    for (int i=0; i<nbreCouleur;i++) {
        rgb[i].rouge = rand() %256; //palette de couleur en RGB va de 0 à 255 = 256 possibilités
        rgb[i].bleu = rand() %256;
        rgb[i].vert = rand() %256;
        printf("Rouge : 0x%x, Bleu : 0x%x, Vert : 0x%x \n",rgb[i].rouge, rgb[i].bleu, rgb[i].vert);
    }

}