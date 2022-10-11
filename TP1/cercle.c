#include <stdio.h>
#include <math.h>
#define M_PI //utilisaiton de la bibliothèque math.h pour avoir la valeur exacte de pi

int main(){
    float rayon =  5;
    float aire = M_PI*(rayon*rayon); //formulaire de l'aire d'un cercle
    float perimetre = 2*M_PI*rayon; //formulaire du perimetre d'un cercle
    printf("Aire du cercle : %f \nPerimetre du cercle : %f\n",aire,perimetre);
}

/* facile */
