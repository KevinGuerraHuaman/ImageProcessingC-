#include <stdio.h>
#include <stdlib.h>


int addNumbers(int num1, int num2){
    return num1 + num2;
}


int main(){

    int sum = addNumbers(4,60);

    printf("%d \n", sum);


    return 0;
}