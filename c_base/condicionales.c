#include <stdio.h>
#include <stdlib.h>

int main(){

    int isStudent = 1;
    int isSmart = 0;

    if (isStudent != 0 && isSmart !=0){
        printf("Eres estudiante\n");
    }
    else if(isStudent!=0 && isSmart==0){
        printf("Eres un estudiante inteligente\n");
    }
    else{
        printf("No eres estudiante y no eres inteligente");
    }

    if ('a' < 'b'){
        printf("Son iguales\n");
    }

    return 0;
}