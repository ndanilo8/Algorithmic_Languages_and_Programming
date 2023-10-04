#include <stdio.h>


double f1 (double a,double b){
    return a*b;
}

double f2(double c, double d){
    return c-d;
}

int main(){

    double sum = f1(5.5, 3.9) + 25 * f2(44,5) + sizeof(int);
    printf("Result = %lf", sum);
    return 0;
}


