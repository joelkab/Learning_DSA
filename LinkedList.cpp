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
---Displaying Linked List--------
-Moving to the next node
struct Node *p = first;

p = p -> next
if you dont know many nodes are there, uisng a while would be the best option.

while(p != NUll(or 0)){
    cout<<p -> data;
    p = p ->next;

}
----using recursion
iny count(struct Node *p){
    if(p=0){
        return 0;
    }else{
        count(p->next)+1;
    }

}
- the addition is done at running time becasue the result is unknown.
*/
/*----------------------------------Searching in a Linked List--------
- Linear Search
Best method for finding elements in a linked list

*improving linear Search
1. Transposition 
2. Move to Head

Its better to avoid moving elements(transposition) in a linked list but moving nodes is the best way
-
Node * Search(Node 8 P, int key){
    Node *q = NULL:
    while(p! = NULL){
        if(Key == P-> data){
            q-> next = p-> next;
            p -> next = first;
            first = p;
        }
        q = p;
        p = p-> next;
    }
}
- Binary Search
 you can not acces the middle element of a linked list, so binary seach is not suited for it Linked listed

*/
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

// Insert a node at the start
void insert(int num)
{
    struct Node *ptr = new Node;
    ptr->data = num;
    ptr->next = head;
    head = ptr;
}

// display all nodes
int MAX()
{
    struct Node *temp = head;
    cout << "The list contains:\n";
    int m = -1;
    while (temp)
    {
        cout << temp->data << " ";
        if (temp->data < m)
        {
            m = temp->data;
        }
        temp = temp->next;
    }
    cout << endl;
    return m;
}

int Search(int num)
{
    struct Node *temp = head;

    while (temp != 0)
    {
        if (num == temp->data)
        {
            cout << "element is in the list";
            return num;
        }
        temp = temp->next;
    }
    return 0;
}

// Time -O(n)
int main()
{

    insert(23);
    insert(45);
    insert(67);
    insert(22);
    insert(10);

    int found = Search(67);
}