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

/*---------------------------------- Inserting in a Linked List--------
********-inserting a node at the begining
1. create and new node and initialized the node
Node * t = new Node;
t-> data = x;
2. make it point to first
t-> next = first;
3. move first to new node
first = t;

- time O(1) - takes constant time when inserting at the begining of a linked list

****************-inserting a node at a specific location
1. create a new node and initialized the node
Node *t = new Node;
t->data = x; a value you want
2. create a new pointer named P and point it to first;
p = first;
3. move p to the position - 1
for(int i = 0; i< pos -1; i++){
   p = = -> next;
}
4. the new video should be pointing to the next variable
t -> next = p-> next
p -> next = t;

*/

/*---------------------------------- deleting a node at a specific location--------
** -deleting the first node
When deleting the first node you want the next node to be the first node.
whenever you are  deleting a node make sure to delocate the memory for that node

new - used to create a new memory for a node.
delete - used to delete memory for a node.

one pointer is required, move the first node to the next element and set it to be the first node, while the secound node stays at the first node.

Node * p = first;
first = first-> next;
x = p->data
delete p;

-time - O(1)- constant because its the first node

** -deleting a node at a chosen position
two pointers are required, a tail pointer for the previous element and one for the element you want to be deleted

Node *p = first;
Node * q = NULL;

for(int i = 0; i> pos-1;i++){
    q= p;
    p = p->next;
    q->next= p->next;
    x= p->data;
    delete p;
}

-time - min O(1), max O(n)


*/
/*---------------------------------- reversing a linked list--------
there are two ways to reverse a linked list 1. Switching Nodes 2. Reversing Links

** Reversing elements
method 1- take a array with the total size of elements.
1. copy all the elemets to the array
2. reverse copy all the elements to the linked list


*/
struct Node
{
    int data;
    Node *next;
} *first;

// create a node
void create(int *arr, int size)
{
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    struct Node *last = new Node;
    last = first;

    for (int i = 0; i < size; i++)
    {
        struct Node *t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// search a element in a linked list
int Search(int num)
{

    struct Node *temp = first;

    while (temp != NULL)
    {
        if (num == temp->data)
        {
            cout << "found " << temp->data << endl;

            return temp->data;
        }

        temp = temp->next;
    }
    return 0;
}

void display()
{
    struct Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Insert a node at the start or at an element

void insert(Node *p, int pos, int key)
{
    Node *t = NULL;
    t = new Node();
    if (pos < 0)
        return;
    else if (pos == 0)
    { // added
        t->data = key;
        t->next = first;
        first = t;
    }
    if (pos > 0)
    { // added
        t->data = key;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
// Inserting at the end of a linked List;
void inserting_Last(int x)
{
    Node *t = new Node;
    Node *last;

    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
// inseting a node in a sorted list
void Sorted(Node *p, int num)
{
    Node *t = new Node;
    Node *q = NULL;

    t->data = num;
    t->next = NULL;

    while (p && p->data < num)
    {
        q = p;
        p = p->next;
    }
    if (p == first)
    {
        t->next = first;
        first = t;
    }
    else
    {

        t->next = q->next;
        q->next = t;
    }
}
// deleting element from a linked list
int Delete(Node *p, int num)
{
    Node *q = NULL;

    int x = -1;
    // deleting the first number
    if (num < 10 || num > 30)
    {
        return 0;
    }
    if (num == 10)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    // deleting a specific node.
    else
    {
        while (p && p->data < num)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x = p->data;

        return num;
    }
}
// check if a linked list is sorted;
bool isSorted(Node *p)
{
    int x = -1;

    while (p != NULL)
    {
        if (p->data < x)
        {
            cout << "not sorted ";
            return false;
        }
        x = p->data;
        p = p->next;
    }
    cout << "sorted";
    return true;
}
/// Remove duplicates from a sorted Lsit
void Rem_Dup()
{
    Node *p = first;
    Node *q = first->next;
    int x = 0;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            cout << "\nfound one; \n ";
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
// reverse all the element of a linked list
void Rev(Node *p)
{
    int Elem[12];
    int i = 0;

    while (p != NULL)
    {
        Elem[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;

    while (p != NULL)
    {
        p->data = Elem[i--];
        p = p->next;
    }
}

void display(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        display(p->next);
    }
}
// Time -O(n)
int main()
{
    int num = 0;

    int arr[] = {4, 7, 8, 1, 3, 87, 12, 39, 51, 23, 77};
    create(arr, 11);

    // insert(first, 0, 10);
    // insert(first, 1, 20);
    // insert(first, 2, 20);
    // insert(first, 3, 40);
    // isSorted(first);

    display(first);
    cout << endl;
    Rev(first);
    display(first);
}