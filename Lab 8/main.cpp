// Danilo Nascimento Lab 8
#include <iostream>
#include<stdio.h>
#include <string.h>

int main()
{

    static char name[15] = "Petrova";
    char name_1[24];

    // scanf("%7s", name_1, 7);

    char job[50];
    strcpy(job, "Diver");
    printf(" %s \n", job);

    printf("\n");

    char word[20];
    gets_s(word);
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