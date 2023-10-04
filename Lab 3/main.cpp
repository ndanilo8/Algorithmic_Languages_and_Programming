#include <iostream>
#include <stdio.h>

// coding with C++
// using namespace std;

// check class recording last part for explanation. 24.02.2022
int main()
{

    // step 1 declare variables

    /*
    // 1. product a result
    int a = 5, b = 5;
    int c = a + b - 5;

    // 2. generate side effects
    printf("%d\n", c);

    // 3. designate fuction or procedure
    printf("%d\n", a + b);

    // 4.
    printf("%d\n", a + b + 2);

    // print an age
    int age = 5; // kid
    printf("%d\n", age);

    int i = 5;
    {
        int i = 15;
    }
*/

    // Type conversion
    int num = 13;
    char c = 'k'; // ASCII value is 107
    float sum;
    sum = num + c;
    printf("sum = %f\n", sum);

    float b = 3.0;
    printf("%f\n", b);
    int a = (int)b;
    printf("%d\n", a);

    // step 6.

    int size_of = sizeof(short int);
    printf("value of Short int is %d\n", size_of);

    size_of = sizeof(unsigned int);
    printf("value of unsigned int is %d\n", size_of);

    size_of = sizeof(float);
    printf("value of float is %d\n", size_of);

    size_of = sizeof(double);
    printf("value of double is %d\n", size_of);

    size_of = sizeof(long double);
    printf("value of long double is %d\n", size_of);

    // step 7
    // Automatic type (implicit conversion)
    double x = 2.121;
    int d = 5;
    double s1 = x + d;
    printf("value of x +d is %lf\n", s1);

    d = x;
    printf("value of d = x is %d\n", d);

    x = 2.331;
    d = 5;
    int s2 = x + d;
    printf("value of x + d is %d\n", s2);

    // step 8 explicit type conversion
    int i = 5;
    printf(" Value of i (double i is %lf\n", (double)i);

    x = x + (double)i;
    printf(" Value of x = x + (double)i is %lf\n", (double)x);

    printf(" A %d\n", 'A');
    printf("Value of (char)3 + A is %c\n", (char)3 + 'A');

    char st = (char)3 + 'A';
    printf("value of st is %c\n", st);

    int kk = 4;
    printf("value of st is %lf\n", (double)kk * 57.01);

    printf("%c %c %c\n", 'A', 'B', 'C');

    // step 9 basic input scanf
    int pin = 0;
    printf("Please type in your PIN\n");
    scanf("%d", &pin);
    printf("Your access code is %d\n", pin);



    return 0;
}