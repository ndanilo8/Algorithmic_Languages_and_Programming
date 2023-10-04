#include <stdio.h>
#include <iostream>

int main()
{
    printf("Lab 6\n");

    int b = 11;
    char s[10];

    printf("Step 1 input int\n");
    scanf("%s", &s);
    printf("s = %s \n", s);

    for (unsigned i = 0; i < 6; i++)
    {
        b++;
        printf("Step 3 output int %d \n", b);
    }

    for (unsigned i = 0, j = 7; i < 8; ++i, j++)
    {
        ++b;
        b += j;
        printf("Step 4 output int %d %d %d \n", i, j, b);
    }

    printf("Step 5 output int \n");
    int i = 1, factorial = 1, n = 5;
    while (i <= n)
    {
        factorial *= i;
        i = i + 1;
    }
    printf("factorial of 5 %d \n", factorial);

    // DO and continue
    printf("DO and continue\n");
    int a = 10;
    do
    {
        if (a == 11)
        {
            a++;
            continue;
        }
        printf("value of a: %d\n", a);
        a++;
    } while (a < 20);

    printf("\nDO and Break\n");
    // DO and break;
    a = 10;
    do
    {
        if (a == 11)
        {
            a++;
            break;
        }
        printf("value of a: %d\n", a);
        a++;
    } while (a < 20);

    // Nested for loop;
    printf("\nNested for loop\n");
    int b = 0;
    for (unsigned i = 0; i < 3; i++)
    {
        for (unsigned j = 0; j < 3; j++)
        {
            b++;
            printf("b = %d\n", b);
        }
    }
    printf("Result b = %d", b);

    // printf("Step 6 output int");

    // return 0;
}