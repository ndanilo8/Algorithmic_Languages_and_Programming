#include <iostream>
#include <math.h>
#include <string.h>

int compute_sum(int n); // prototype

int factorial(int n)
{
    int result;
    if (n <= 1)
        result = 1;
    else
        result = n * factorial(n - 1);
    return result;
}

int main()
{

    int n = 8, sum;
    printf(" Main n before call is %d\n", n);
    sum = compute_sum(n);
    printf(" Main n after call is %d\n", n);
    printf("\n The sum of integers from 1 to %d is %d\n", n, sum);

    n = 4;
    int a = factorial(4);
    printf(" factorial %d\n", a);
    printf("\n");

    static char name[15] = "Petrova";
    char name_1[24];
    // name ="Ericson"; //Illegal

    // scanf("%7s", name_1, 7);

    char job[50];
    strcpy(job, "Diver");
    printf(" %s \n", job);

    printf("\n");

    char word[20];
    gets(word);
    puts(word);

    printf("\n");

    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDF");
    printf(" str1 length = %d", strlen(str1));
    printf(" str2 length = %d", strlen(str2));

    printf("\n");

    ret = strcmp(str1, str2);
    if (ret < 0)
        printf("str1 is less than str2");
    else if (ret > 0)
        printf(" str2 is less than str1 ");
    else
        printf(" str1 is equal to str2");

    printf("\n");

    char c;
    printf("Enter character:");
    c = getchar();
    printf("Character entered:");
    putchar(c);

    return 0;
}

int compute_sum(int n)
{
    int sum = 0;
    for (; n > 0; --n)
        sum += n;
    printf(" Local n on function is %d\n", n);
    return sum;
}
