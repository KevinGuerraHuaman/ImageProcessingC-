#include <stdio.h>
#include <stdlib.h>

int main(){

    char test = 'A'; //single 8 bit caracter
    char name[] = "Kevin"; //array

    short age0 = 10;
    int age1 = 20;
    long age2 = 30;
    long long age3 =40;

    float gpa =2.5;
    double gpa1 = 3.5;
    long double gpa2 = 3.5;
    int isTall; // 0 if es false
    isTall = 1;

    test = 'F';

    printf("%s, tu grado es %c \n", name, test);

    /*
    %c character
    %d integer number
    %e eponential floating-point number
    %f floating-point number
    %i integer

    */



    return 0;
}