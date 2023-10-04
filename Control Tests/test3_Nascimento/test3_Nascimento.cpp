#include <iostream>
#include <stdio.h>
#include <string.h>

// Danilo Nascimento

void funcPrintChar(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        printf(" %c \n", a[i]);
    }
}

int main()
{
    // Step 2
    printf("Step 2\n");
    char letters[] = "ssfdfgghjkjkk";
    printf("%s \n", letters);
    strcpy(letters, "Danilo");

    // Step 3
    printf("Step 3\n");
    funcPrintChar(letters);

    // Step 4
    printf("Step 4\n");
    strcpy(letters, "ssfdfgghjkjkk");

    int s_counter = 0, f_counter = 0, d_counter = 0, g_counter = 0, h_counter = 0, j_counter = 0, k_counter = 0;

    for (int i = 0; i < strlen(letters); i++)
    {
        switch (letters[i])
        {
        case 's':
            s_counter++;
            break;
        case 'f':
            f_counter++;
            break;
        case 'd':
            d_counter++;
            break;
        case 'g':
            g_counter++;
            break;
        case 'h':
            h_counter++;
            break;
        case 'j':
            j_counter++;
            break;
        case 'k':
            k_counter++;
            break;
        default:
            printf("No letters");
            break;
        }
    }
    printf("s = %d\n", s_counter);
    printf("f = %d\n", f_counter);
    printf("d = %d\n", d_counter);
    printf("g = %d\n", g_counter);
    printf("h = %d\n", g_counter);
    printf("j = %d\n", j_counter);
    printf("k = %d\n", k_counter);

    // Step 5
    // Step 5.1
    printf("Step 5.1\n");
    float b[5][5] = {1.0, 2.0, 3.0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            b[i][j] = 0;
            printf(" %g", b[i][j]);
        }
        printf("\n");
    }

    // Step 5.2
    printf("Step 5.2\n");

    b[1][2] = 3.0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                b[i][j] = 1;
            }
            if (b[i][j] == 3.0)
            {
                b[i][j] = 6.0;
            }
            printf(" %g", b[i][j]);
        }
        printf("\n");
    }

    // Step 6
    printf("Step 6\n");
    float arr_3d[4][4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                arr_3d[i][j][k] = 1.8;
                printf(" %g", arr_3d[i][j][k]);
            }
        }
        printf("\n");
    }

    // Step 7
    printf("Step 7\n");
    enum Colours
    {
        black,
        green,
        orange,
        blue,
        purple
    };

    Colours color = black;

    for (int i = black; i <= purple; i++)
    {
        printf(" %d", i);
    }

    // struct Col_t
    // {
    //     using enum Colours;
    // };

    // Col_t colours;
    // colours.black;

    // for (int i = colours.black; i <= colours.purple; i++)
    // {
    //     printf(" %d", i);
    // }
}
