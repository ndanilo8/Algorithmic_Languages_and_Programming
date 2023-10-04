#include <stdio.h>
#include <math.h>

// C version of Distance Function

// velocity = v , time

float distance(float velocity, float time)
{
    return velocity * time;
}

int main()
{
    float x = distance(10, 2);
    printf("Position is = %g",x);
    return 0;
}