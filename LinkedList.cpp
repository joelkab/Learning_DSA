#include <iostream>
using namespace std;
/*----------------------------------Linked List--------
- A collection of node that contains data pointed to the next node
Created inside head instead of Stack

-Why Linked List instead of arrays 
Arrays are fixed size,

-Differences between array and linkedList
A bench, like an array, has a fixed amount of individuals (elements) who can sit on it. 
A linked list is analogous to a chair in that only one person can sit on it, but you may bring as many chairs as you like and connect them together.
Every element will bring its own memory and point it to the next element.

First is a pointer which points on the first node 

-defining a node
You need two things data and a pointer 

Struct Node {
    int data;
    struct Node * next;
}

- self-referential structures having a pointer of its own type 
struct Node *P;

P= new Node;
p-> data = 10;
p-> next = 0;
*/
/*----------------------------------More about Linked List--------
To make a head of a linked list null you make it equal to zero or null.
EX : struct Node * p = 0; or NULL;

- Check if pointer p is pointing to a node
if(p== NULL)

-Check if theres more nodes after p, or p is the last node.
if(p -> == NUll)

if(p-> != NUll)

*/


int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
}