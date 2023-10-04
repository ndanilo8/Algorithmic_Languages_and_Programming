// static memory allocation

#include <stdio.h>
#include <windows.h>

int main()
{

    int size = 5; // size of array

    int *ptr;

    /*

    */

    ptr = (int *)malloc(size * sizeof(int));
    /*
    1.
    2.
    3.
    4.

    */

    // Check if the memory has been siccessfully allocated
    if (ptr == NULL)
    {
        printf("Memoery not allocated. \n");
        exit(0);
    }

    printf("The elements of the array are: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    //free(malloc);



    return 0;
}
