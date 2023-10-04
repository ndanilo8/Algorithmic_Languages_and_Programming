#include <stdio.h>
//#include <iosteam>

int main()
{
    printf("Class 5\n");
    // True / False
    bool b = true; // bool boolean true/false for C++

    // for C is 0 or 1
    int var = 1;  // true
    int var0 = 0; // false

    printf("\tif-else Case\n");
    if (b)
    {
        printf("If Statement\t 1 \n");
    }
    if (var)
    {
        printf("If statement\t 2 \n");
    }

    if (var0)
        printf("If Statement\t 3 \n");
    printf("If statement\t 4 \n");

    if (var >= 5)
        printf("If statements\t >= \n");
    else
        printf("If statements else\n");

    printf("\tif-elseif Case\n");
    char letter = 'y';
    int a_count = 0,
        e_count = 0,
        i_count = 0,
        o_count = 0,
        u_count = 0,
        const_count = 0;

    if (letter == 'a')
        a_count++;
    else if (letter == 'e')
        e_count++;
    else if (letter == 'i')
        i_count++;
    else if (letter == 'o')
        o_count++;
    else if (letter == 'u')
        u_count++;
    else
    {
        const_count++;
        printf("const_count %d \n", const_count);
    }
    printf("u_count %d\n", u_count);
    // printf("a_count %d\n", a_count);

    printf("\tSwitch Case\n");
    letter = 'u';

    switch (letter)
    {
    case 'u':
        u_count++;
        printf(" switch u_count\t %d \n", u_count);
        break;

    case 'a':
        a_count++;
        printf("switch u_count\t %d \n", a_count);
        break;

    default:
        printf("switch const_count\t %d \n", const_count);
        break;
    }

printf("\t Ternary Operators\n");
    int number = 42;
    unsigned short even = 0;
    even = (number % 2 == 0) ? 1 : 0;

    // or
    if (number % 2 == 0)
        even = 1;
    else
        even = 0;

    printf("Step 1 even = %d \n", even);
    printf("Step 2 even = %d \n", even = (number % 2 == 0) ? 1 : 0);
    printf("Step 3 even = %d \n", (number % 2 == 0) ? 1 : 0);

    return 0;
}