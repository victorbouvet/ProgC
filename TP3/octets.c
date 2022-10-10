#include <stdio.h>

int main() {
    short valShort = 15;
    int valInt = 98;
    long int valLong = 784100;
    float valFloat = 0.078;
    double valDouble = -45.20;
    long double valLongDouble = -78.4525466;


    for (unsigned int i = 0; i < sizeof(valShort); i++) {
        printf("%x\n", *((unsigned char*)&valShort+i));
    }

    printf("\n");

    for (unsigned int i = 0; i < sizeof(valInt); i++) {
        printf("%x\n", *((unsigned char*)&valInt+i));
    }

    printf("\n");

    for (unsigned int i = 0; i < sizeof(valLong); i++) {
        printf("%x\n", *((unsigned char*)&valLong+i));
    }

    printf("\n");

    for (unsigned int i = 0; i < sizeof(valFloat); i++) {
        printf("%x\n", *((unsigned char*)&valFloat+i));
    }

    printf("\n");

    for (unsigned int i = 0; i < sizeof(valDouble); i++) {
        printf("%x\n", *((unsigned char*)&valDouble+i));
    }

    printf("\n");

    for (unsigned int i = 0; i < sizeof(valLongDouble); i++) {
        printf("%x\n", *((unsigned char*)&valLongDouble+i));
    }

    printf("\n");

}