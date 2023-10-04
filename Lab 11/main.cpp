#include <iostream>

void swapInt(int **x, int **y)
{
    int *temp = *x;
    *x = *y;
    *y = temp;
}

namespace exercise1
{
    void exec()
    {
        printf("\n Exercise 1!\n");
        int *i = NULL;
        int vi = 5;
        i = &vi;
        printf(" Value by *i : %d \n", *i);
    }
}

namespace exercise2
{
    void exec()
    {
        printf("\n Exercise 2!\n"); // swap

        int N1 = 5;
        int N2 = 7;

        int *i = &N1;
        int *j = &N2;

        printf(" Value of *i : %d\n Value of *j : %d\n", *i, *j);

        printf("\t Swap\n");

        printf("\tbefore swap (outside function)\n");
        printf("i %x\n", i);
        printf("j %x\n", j);

        // with Function
        swapInt(&i, &j);

        printf("\tAfter swap (outside function)\n");
        printf("i %x\n", i);
        printf("j %x\n", j);

        printf(" Value of *i : %d\n Value of *j : %d\n", *i, *j);

        /* // bellow without function
            int *temp = i;
            i = j;
            j = temp;
        */
    }

}

namespace lecture8part2_1st
{
    void exec()
    {
        printf("\n  Lecture 8 part 2 1st exercise\n");
        //  1st exercise
        int N = 5;
        int arr[] = {1, 2, 3, 4, 5};
        int *ptr;
        ptr = arr;

        for (int i = 0; i < N; i++)
        {
            printf(" %d ", ptr[0]);
            ptr++;
        }

        static int g[100] = {2};
        int i, *p, sum = 0;
        for (int i = 0; i < 100; ++i)
            sum += *(g + i);
        printf("\n sum = %d \n", sum);

        sum = 0;
        for (p = g; p < &g[100]; ++p)
            sum += *p;

        printf("\n sum = %d \n", sum);
    }

}

namespace lecture8part2_2nd
{
    void traverseArr(int *arr, int N, int M)
    {
        int i, j;

        for (i = 0; i < N; ++i)
        {
            for (j = 0; j < M; j++)
            {
                printf(" %d ", *((arr + i * M) + j));
            }
            printf("\n");
        }
    }

    // 2nd exercise
    void exec()
    {
        printf("\n  Lecture 8 part 2 2nd exercise\n");
        // 2nd
        int N = 3, M = 2;
        int arr[][2] = {{1, 2}, {3, 4}, {5, 6}};

        traverseArr((int *)arr, N, M); // array, rows, columns
    }
}

namespace lecture8part3
{
    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

    void exec()
    {

        int N1 = 5;
        int N2 = 7;

        int *i = &N1;
        int *j = &N2;

        // swap(&i,&j); // ! Correct

        // 2nd

        int a = 10;
        int *ptr_1 = &a;
        printf("\nResult *ptr_1 = %d\n ", *ptr_1);
    }

}

namespace classExercise
{
    int sum2dArr(int *arr, int N, int M)
    {
        int i, j;
        int sum = 0;
        for (i = 0; i < N; ++i)
        {
            for (j = 0; j < M; j++)
            {
                sum += *((arr + i * M) + j);
                // printf(" %d ", *((arr + i * M) + j));
            }
            // printf("\n");
        }
        return sum;
    }

    void exec()
    {
        // define a function that sum values of elements of the 2d array
        int row = 3;
        int collumn = 2;
        int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};

        int sum = sum2dArr((int *)arr, row, collumn);

        printf("\nsum values of elements of the 2d array is: %d", sum);
    }
}

namespace lecture8part3_1
{

    double sum(double *dp, int n)
    {

        double res = 0.0;
        for (int i = 0; i < n; ++i)
            res += *(dp + i);
        return res;
    }

    void exec()
    {

        double position[150], length;

        length = sum(position, 150);

        printf("\n Length = %lf \n", length);

        // ---


        const char* cp = "good time";
        printf("%c\n",cp);
        printf("%c\n", (cp+6));

    }



}

int main()
{
    // namespaces to stop conflicting variables
    exercise1::exec();
    exercise2::exec();
    lecture8part2_1st::exec();
    lecture8part2_2nd::exec();
    lecture8part3::exec();
    classExercise::exec();
    lecture8part3_1::exec();

    return 0;
}