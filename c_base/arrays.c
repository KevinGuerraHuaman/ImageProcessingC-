#include <stdio.h>
#include <stdlib.h>

int main(){

    //unidimensional

    int luckyNumbers[] = {4,7,12,42,23,92};

    luckyNumbers[0] = 90;

    printf("%d \n", luckyNumbers[0]);
    printf("%d \n", luckyNumbers[1]);

    //bidimiensional
    // int numberGrid[2][3];
    int numberGrid[2][3] = {{1,2,3},{4,5,6}};
    numberGrid[0][1] = 90;

    printf("%d \n", numberGrid[0][0]);
    printf("%d \n", numberGrid[0][1]);

    return 0;
}