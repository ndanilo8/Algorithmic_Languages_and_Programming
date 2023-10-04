#include <stdio.h>
#include <iostream>

using namespace std;

// Booleans
int a = 10;
int b = 10;

int main()
{
    // logical and && Operator
    if (a > 0 && b > 0)
    {
        printf("The numbers are greater than 0\n");
    }

    // logical  or || operator
    b = -10;
    if (a > 0 || b > 0)
    {
        printf("Either of the number is greater than 0\n");
    }

    // Boolean value
    a = 0;
    if (!a)
        printf("Boolean value of 'a' is false\n");

    printf("Output =  %d\n", a > b);

    // Bitwise operators

    cout << "Shift left the stream" << endl;

    a = 3;
    b = 5;
    a &= b;
    printf("Output %d\n", a);
    // For loops
    int result = 30;
    for (int x = 100; x != 65; x -= 5)
    {
        result -= x;
        printf("The result %d is %d\n", x, result);
    }

    int product = 1;
    for (int i = 1; i < 6;)
    {
        product *= i++;
        printf("Result %d \n", product);
    }

    int z = 0;
    for (int x = 1, y = 5; x + y < 100; ++x)
        z = x % y;

    printf("Result z = %d\n", z);

    // While loops
    int i = 1, n = 7;
    int factorial = 1;
    while (i <= n)
    {
        factorial *= 1;
        i = i + 1;
    }
    printf("result = %d\n", factorial);

    int j = 15;
    while (j--)
    {
        //
    }

    int value = 30, r_digit = 2;
    do
    {
        r_digit = value % 10;
        printf("%d\n", r_digit);
        value = value / 10;
    } while (value != 0);

    // will continue the capture until input value is 10 or greater
    // do
    // {
    //     printf("\n Input a positive integer: ");
    //     scanf("%d", &n);

    // } while (n < 10);

    int a = 8;
    do
    {
        if (a == 11)
        {
            a = a + 1;
            continue;
        }
        printf("Value of a: %d\n", a);
        a++;
    } while (a < 22);

    a = 8;
    do
    {
        if (a == 17)
        {
            break;
        }
        printf("value of 'a' %d\n", a);
        a++;
    } while (a < 22);

    // usage of goto
    a = 0;
LOOP:
    do
    {
        if (a == 17)
        {
            a = a + 1;
            goto LOOP;
        }
        printf("Value of a: %d\n", a);
        a++;

    } while (a < 22);

    return 0;
}