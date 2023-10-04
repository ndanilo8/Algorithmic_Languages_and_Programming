#include <iostream>
#include <math.h>

int main()
{
    // Min and Max
    printf(" Min %lf\n", fmin(5, 10));
    printf(" Max %lf\n", fmax(5, 10));
    // all roundings
    printf(" Round : %lf\n", round(-0.2));
    printf(" Ceiling: %lf\n", ceil(-0.2));
    printf(" Floor: %lf\n", floor(-0.2));
    printf(" Truncate: %lf\n", trunc(-0.2));

    // Round
    double d = 2.72;
    int a = (int)round(d);
    printf(" a = %d\n", a);

    // abs
    printf(" Abs: %d\n", abs(-10));

    // enum week {Mon, Tue, Wed};
    // enum week day;
    enum week
    {
        Mon,
        Tue,
        Wed
    } day;
    day = Wed;
    printf(" %d\n", day);

    enum year
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };

    for (int i = Jan; i <= Dec; i++)
    {
        printf(" %d", i);
    }

    printf("\n");

    enum State
    {
        Working = 1,
        Failed = 0,
        Wait = 0
    };

    printf(" %d %d %d\n", Working, Failed, Wait);

    printf("\n");

    return 0;
}