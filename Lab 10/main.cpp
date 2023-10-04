#include <iostream>

/*
// Class 10:  Pointers

Danilo Nascimento
M6O-111bki-21

*/

namespace lecture
{
    void pointer_lecture()
    {
        printf(" Lecture 10!\n");
        int a = 10;
        printf(" The value a = %d\n", a);
        printf(" The address a : %x\n", &a); // addr of a

        int *ptr;
        printf(" The Address of pointer : &prt = %x\n", &ptr);           // Addr of ptr
        printf(" Take the address contains pointer before : %x\n", ptr); // should out put trash as nothing was assigned to prt... as we will see bellow

        ptr = &a;
        printf(" take the address of variable that contains pointer after : %x\n", ptr);   // get addr of a
        printf(" take the variable value that address contains pointer prt = %d\n", *ptr); // get value of a
    }

}

int main()
{
    lecture::pointer_lecture();

    printf("\n Lab 10!\n\n");

    // *************************
    /*
        printf("Exercise 1!\n");
        // 1. Declare variable float f = 5.55;
        float f = 5.55;

        // 2. Declare pointer ptr
        float *ptr;

        // 3. Assign to pointer address address of the f
        // print the value by the f (direfference)
        ptr = &f;
        printf(" value of f = %f \n", *ptr);
    */
    // *************************
    /*
            int a = 10;
            int b = *ptr;
            int *pointer = &a;
            printf(" Pointer = %x \n", pointer);

            int N = 4;
            int *ptr1, *ptr2;
            ptr1 = &N;
            ptr2 = &N;
            printf(" Pointer ptr1 before increment: ");
            printf(" %x\n", ptr1);

            ptr1++;
            printf(" Pointer ptr1 after increment: ");
            printf("%x\n ", ptr1);

            printf(" Pointer ptr1 before decrement: ");
            printf("%x\n", ptr1);
            ptr1--;
            printf(" Pointer ptr1 after decrement: ");
            printf("%x\n", ptr1);
    */
    // *************************
    /*
        printf("\n Exercise 2!\n");
        // 1. Declare variable double d = 5.55

        double d = 5.55;

        // 2. Declare pointer ptr
        // print address ptr to d variable
        double *ptr = &d;
        printf(" d addr: %x\n", ptr);

        // 3. increment d Print the result
        printf(" Increment d addr: %x\n", ++ptr);

        // 4 decrement d Print the result
        printf(" Decrement d addr: %x\n", --ptr);
    */
    // *************************
    /*
        printf("\n Exercise 3!\n");

        int N = 4;
        int *ptr1 = &N;
        int *ptr2 = &N;
        printf(" Pointer ptr2 before addition: \n", ptr2);
        printf("%x\n", ptr2);

        ptr2 = ptr2 + 3;
        printf(" Pointer ptr2 after addition: \n", ptr2);
        printf("%x\n", ptr2);

        ptr1 = &N;
        ptr2 = &N;
        printf(" Pointer ptr2 before subctraction: \n", ptr2);
        printf("%x\n", ptr2);

        ptr2 = ptr2 - 3;
        printf(" Pointer ptr2 after subctraction: \n", ptr2);
        printf("%x\n", ptr2);
    */
    // *************************

    int a;
    int N = 4;
    int *ptr1, *ptr2;
    ptr1 = &N;
    ptr2 = &N;

    ptr2 = ptr2 + 3;

    a = ptr2 - ptr1;
    printf(" subctraction of ptr2 and ptr1: \n", ptr2);
    printf("%d\n", a);

    return 0;
}