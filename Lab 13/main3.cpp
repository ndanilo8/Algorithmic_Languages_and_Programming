// Lecture 10
// Unions, Memory Allocation, Command Line, File input and output. (Lecture p. l0.1-4  )

#include <iostream>
#include <string.h>

union student
{
    char name[20] ;
    char subjetcs[20] ;
    float grade;
};


int main(){

    union student Nick;
    union student Lisa;

strcpy(Nick.name, "Nick");

strcpy(Nick.subjetcs,"Maths");

Nick.grade = 4.5;

    return 0;
}