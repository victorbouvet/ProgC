#include <stdio.h>
#include <math.h>
#define M_PI

int main(){
    float rayon =  5;
    float aire = M_PI*(rayon*rayon);
    float perimetre = 2*M_PI*rayon;
    printf("Aire du cercle : %f \nPerimetre du cercle : %f\n",aire,perimetre);
}

/* facile */