#include <stdio.h>

int main(){
    printf("int : %ld\n", sizeof(int));
    printf("int * : %ld\n", sizeof(int *));;
    printf("int ** : %ld\n", sizeof(int **));
    printf("char * : %ld\n", sizeof(char *));
    printf("char ** : %ld\n", sizeof(char **));
    printf("char *** : %ld\n", sizeof(char ***));
    printf("float * : %ld\n", sizeof(float *));
    printf("float ** : %ld\n", sizeof(float **));
    printf("float *** : %ld\n", sizeof(float ***));
}
