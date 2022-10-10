#include <stdio.h>

int main(){
    char my_char = 'zf';
    short my_short = 0;
    int my_int = 5000;
    long my_long = -50;
    long long my_longlong = -100000;
    float my_float = 0.084;
    double my_double = 0.0000;
    long double my_longdouble = -100000;

    printf("char : %c\n", my_char);
    printf("short : %i\n", my_short);
    printf("int : %i\n", my_int);
    printf("long int : %li\n", my_long);
    printf("long long int : %lli\n", my_longlong);
    printf("float : %f\n", my_float);
    printf("double : %lf\n", my_double);
    printf("long double : %Lf\n", my_longdouble);
}

/* facile */