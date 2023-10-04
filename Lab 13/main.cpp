#include <iostream>
#include <stdio.h>

struct point
{
    int x;
    int y;
};
struct point my_point = {3, 7};

// binary tree

struct Node
{
    const char *name;
    Node *left; // recursion
    Node *right;
};

void traceByTree(Node node);

int main()
{
    // 1st
    struct point *p = &my_point;
    (*p).x = 8;
    p->y = 9;

    printf(" x = %d , y= %d", my_point.x, my_point.y);

    // 2nd

    Node n1, n2, n3, n4, n5;
    n1.name = "n1";
    n2.name = "n2";
    n3.name = "n3";
    n4.name = "n4";
    n5.name = "n5";

    n1.left = &n2;
    n1.right = &n3;

    n3.right = NULL;
    n3.left = NULL;

    n2.left = &n4;
    n2.right = &n5;

    n4.left = NULL;
    n4.right = NULL;

    n5 = n4;

    traceByTree(n1);
    return 0;
}

void traceByTree(Node node)
{
    printf(" node .name = %s\n", node.name);
    if (node.left != NULL)
    {
        printf("node.left \n");
        traceByTree(*node.left);
    }
    if (node.right != NULL)
    {
        printf(" node.right \n");
        traceByTree(*node.right);
    }
}
