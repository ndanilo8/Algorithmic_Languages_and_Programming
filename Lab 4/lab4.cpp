#include <stdio.h>

int main()
{
    // printf("Hello World!\n");
    bool b = true;

    // AND &&
    printf("    AND - && \n");
    if (true && true)
        printf(" true && true   == true\n");
    if ((true && false) == false)
        printf("true && false   == false\n");
    if ((false && true) == false)
        printf("false && true   == false\n");
    if ((false && false == false))
        printf("false && false   == false\n");

    // OR || , NOT !
    printf(" OR - || \n");
    if (true || true)
        printf("true || true= true\n");

    if (true || false)
        printf("true || false = true\n");

    if (false || false)
        printf("false || false = false\n");

    int year = 1800;
    if (year < 1900 && year > 1799)
        printf("Year in question is in the 19th century\n");

    char ch = 'u';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u')
        printf("char is in the expression\n");

    int done = 0;
    while (!done) // same as done <= 0
    {
        printf("while( !done) expression \n");
        done++;
    }

    return 0;
}