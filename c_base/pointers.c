
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 66;

    // el %p imprime el valor de un puntero
    printf("%p \n",&num);


    //el int es porque num es int
    int *pNum = &num; // alamcena un puntero en una variable

    printf("%p \n",pNum);

    // desferenciar la memoria
    printf("%d \n", *pNum); // colocando * obtienes el valor real

    

    return 0;
}