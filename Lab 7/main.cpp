#include <iostream>
//#include <stdio.h>

#define SIZE 100

int main()
{
    /*
    const int size = 10;
    int car1 = 101;
    int car2 = 232;
    int car3 = 231;

    int cars[SIZE];

    cars[0] = 101;
    cars[1] = 333;
    printf(" %d\n", cars[0]);

    for (int i = 0; i < SIZE; i++)
    {
        cars[i] = 22;
        printf(" %d", cars[i]);
    }

    printf(" \n");
    int cars2[size];
    for (int i = 0; i < size; i++)
    {
        cars2[i] = 33;
        printf(" %d", cars2[i]);
    }

    printf(" \n");
    int cars1[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cars1[i] = 10;
        printf(" %d", cars1[i]);
    }

    printf(" \n");
    static int cars_1[size];
    for (int i = 0; i < size; i++)
    {
        printf(" %d", cars_1[i]);
    }

    printf(" \n");
    int cars_2[size] = {010, 101, 202, 303};
    for (int i = 0; i < size; i++)
    {
        printf(" %d", cars_2[i]);
    }

    printf(" \n");
    int cars_3[] = {010, 101, 202};
    for (int i = 0; i < 3; i++)
    {
        printf(" %d", cars_3[i]);
    }
*/

printf(" \n");

 float f2[3][4];
    float f3[3][4][2];

    int cars[2][3];
    cars[0][0] = 11;
    cars[0][1] = 22;
    cars[0][2] = 33;
    cars[1][0] = 33;
    cars[1][1] = 33;
    cars[1][2] = 22;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cars[i][j] = 1;
            printf(" %d", cars[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    static float f4[2][3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                 f4[i][j][k] = 2;
                printf(" %g", f4[i][j][k]);
            }
        }
        printf("\n");
    }

printf("\n");
    int a1_2[2][3] = {{0, 3, 0}, {-1, 5, 0}};
    int a2_2[][3] = {{1, 5, 0}, {-1, 5, 9}};
    int a3_3[2][3] = {0, 3, 0, -1, 5, 0};

    int test[2][3][4] = {
        {{13, 14, 2, 8}, {-10, 7, 8, 11}, {2, 1, 3, 13}},
        {{9, 5, -5, 1}, {7, 8, 5, -1}, {2, 5, 8, 7}}
                        };

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf(" %d", test[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

    return 0;
}