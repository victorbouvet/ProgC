#include <stdio.h>

int main(){
    char my_char = 'z';
    char *ptr_my_char = &my_char;

    short my_short = 0;
    short *ptr_my_short = &my_short;

    int my_int = 0xa47865ff;
    int *ptr_my_int = &my_int;

    long my_long = -50;
    long *ptr_my_long = &my_long;

    long long my_longlong = -100000;
    long long *ptr_my_longlong = &my_longlong;

    float my_float = 2;
    float *ptr_my_float = &my_float;

    double my_double = 0.0000;
    double *ptr_my_double = &my_double;

    long double my_longdouble = -100000;
    long double *ptr_my_longdouble = &my_longdouble;

    printf("char : %c, hexa : %x, adresse : %p\n", my_char, my_char, ptr_my_char);
    printf("short : %d, hexa : %x, adresse : %p\n", my_short, my_short, ptr_my_short);
    printf("int : %i, hexa : %x, dresse : %p\n", my_int, my_int, ptr_my_int);
    printf("long : %ld, hexa : %lx, dresse : %p\n", my_long, my_long, ptr_my_long);
    printf("long long : %lld, hexa : %llx, adresse : %p\n", my_longlong, my_longlong, ptr_my_longlong);
    printf("float : %f, hexa : %f, dresse : %p\n", my_float, my_float, ptr_my_float);
    printf("double : %f, hexa : %f, adresse : %p\n", my_double, my_double, ptr_my_double);
    printf("long double : %Lf, hexa : %Lf, adresse : %p\n", my_longdouble, my_longdouble, ptr_my_longdouble);

}
