// Lab 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>



void Func() {
    static int x = 0;

    x++;
    printf("%d\n", x);

}


struct node
{
    int value;
    struct node* next;

};

typedef struct node snode;
snode* newnode, * ptr, * prev, * temp;
snode* first = NULL, * last = NULL;

snode* create_node(int val);
void insert_node_first(int val);
void display();


int main()
{


    Func(); // prints 1
    Func(); // prints 2
    Func(); // prints 3


       /*
       Example 2

       */
    int size = 5; // size of array

    int* ptr;

    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
            exit(0);
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = i + 1;
    }



    printf("The elements of the array are: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", ptr[i]);
    }
      

    size += 5;
    printf("\n\n The new size of the array: %d\n", size);


    ptr = (int*)realloc(ptr, size * sizeof(int));

    printf("Memory successfully re-allocated using realloc.\n");


    for (int i = 5; i < size; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

       /*
       Example 3
       
       */
    int* ptr1 = new int;
    int* ptr2 = new int[10];

    // dynamic allocated memoery is deallocated
    delete ptr1;
    delete[] ptr2;


    printf(" \n ");
    printf(" Advantage of Dynamic Memory Allocating \n ");

    int size = 10;
    int* ptr3 = new int[15];
    for (int i = 0; i < size; i++) {
        ptr3[i] = i;
        printf("    %d ", ptr3[i]);
    }
    delete[] ptr3;
    
    //return 0;
    
    
    /*
    Example 4

    */

    insert_node_first(11);
    insert_node_first(1);
    insert_node_first(8);
    display();


    return 0;
}


snode* create_node(int val) {

    newnode = (snode*)malloc(sizeof(snode));
    if (newnode == NULL) {

        printf("\nMemoery was not allocated");
        return 0;
    }
    else
    {
        newnode->value = val;
        newnode->next = NULL;
        return newnode;
    }
}

void insert_node_first(int val) {

    newnode = create_node(val);
    if (first == last && first == NULL) {
        first = last = newnode:
        first->next = NULL;
        last->next = NULL;
    }
    else {

    }
}

// Check class recording 12 part 2