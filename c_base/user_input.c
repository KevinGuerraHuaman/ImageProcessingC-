#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[10]; //

    printf("Ingresa tu nombre: ");

    //obtiene el texto ingresado
    // variable donde se almacenará , bufer(caracteres que se ingresa), de donde obtener los daots (estandar es stdin)
    fgets(name, 10, stdin);
    printf("Hola %s \n", name);


    int age;
    printf("Ingresa tu edad: ");
    // tipo de lo que deberia obtener, variable que alamacena
    scanf("%d", &age);
    printf("Tu edad es %d \n",age);

    double gpa;
    printf("Ingresa valor decimal: ");
    scanf("%lf", &gpa);
    printf("El valor es %f \n",gpa);    
    

    return 0;
}