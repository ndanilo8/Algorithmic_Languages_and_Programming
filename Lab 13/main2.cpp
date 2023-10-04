// function overloading

#include <stdio.h>

void f(void *arg1, int arg2);

struct s1
{
    int i;
} s_1;

struct s2
{
    float f;
} s_2;

int main()
{

    f(&s_1, 0);
    f(&s_2, 1);

    return 0;
}

void f(void *arg1, int arg2)
{
    if (arg2 == 0)
    {
        ((s1 *)arg1)->i = 10;
        printf(" s_1 %d\n", ((s1 *)arg1)->i);
    }
    else if (arg2 == 1)
    {
        ((s2 *)arg1)->f = 2.5;
        printf(" s_2 %f\n", ((s2 *)arg1)->f);
    }
}
