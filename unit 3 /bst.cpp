#include <iostream>
using name space std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
Make node(int x)
{
    node *p;
    p = new node;
    p->data = x;
    p->lefr = Null;
}