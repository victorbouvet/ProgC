#include <stdio.h>
#include <stdlib.h>

int main() {

    int nbreCouleur = 100;

    struct couleur {
        int R;
        int G;
        int B;
        int A;
    };

    typedef struct couleur delacouleur;

    delacouleur rgb[nbreCouleur];

   for (int i=0; i<nbreCouleur;i++) { //assignation d'une palette RGB aléatoire à chaque couleur
        rgb[i].R = rand() %256; //palette de couleur en RGB va de 0 à 255 = 256 possibilités
        rgb[i].G = rand() %256;
        rgb[i].B = rand() %256;
        rgb[i].A = 0;
   }

/* test du bon fonctionnement du compteur
   rgb[0].R = 254;
   rgb[0].G = 254;
   rgb[0].B = 254;

   rgb[1].R = 254;
   rgb[1].G = 254;
   rgb[1].B = 254;
*/

    struct compteur {
        int rouge;
        int vert;
        int bleu;
        int compteur;
    };

    struct compteur cpt[nbreCouleur];

   for (int i=0; i<nbreCouleur;i++) { //initilialisation de la structure compteur toutes les valeurs à 0 (surtout le compteur)
        cpt[i].rouge = 0;
        cpt[i].vert = 0;
        cpt[i].bleu = 0;
        cpt[i].compteur = 0;
   }

    for (int val=0; val<nbreCouleur; val++) { // parcours de toutes les couleurs du tableau
        for (int i2=0; i2<nbreCouleur; i2++) { // parcours de la structure compteur pour voir si la couleur d'indice i est dedans
            if (cpt[i2].compteur == 0) { // ajout de la couleur dans la structure compteur quand elle n'est pas encore dedans
                cpt[i2].rouge = rgb[val].R;
                cpt[i2].vert = rgb[val].G;
                cpt[i2].bleu = rgb[val].B;
                cpt[i2].compteur = cpt[i2].compteur + 1;
                break;
            } 
            else if (rgb[val].R == rgb[i2].R && rgb[val].G == rgb[i2].G && rgb[val].B == rgb[i2].B) { // couleur déjà existante dans la structure compteur
                ++cpt[i2].compteur;
                break;
            }


        }
    }

    for (int i=0; i<nbreCouleur; i++) {
        if (cpt[i].rouge && cpt[i].bleu && cpt[i].vert != 0) {
            printf("0x%x 0x%x 0x%x | %i \n",cpt[i].rouge, cpt[i].bleu, cpt[i].vert, cpt[i].compteur);
        }
    }

}

