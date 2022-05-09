#include <stdio.h>
#include <stdlib.h>


struct Student
{
    int age;
    double gpa;
    char grade;
};


int main(){

    struct Student student1;
    
    student1.age = 27;
    student1.gpa = 3.4;
    student1.grade= 'B';
    
    printf("%d \n", student1.age);

    return 0;
}