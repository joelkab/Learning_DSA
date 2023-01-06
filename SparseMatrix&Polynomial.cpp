#include <iostream>
using namespace std;

/*----------------------------------Sparse Matrix----------------

A matrix in which there are more numbers of zero elements.
- using a sparse matrix can be a waste of space because theres more zeroes number that not doing anything
and processing time.

For storing non-zero elements there are more than one approach. One method is coordinate list, secound is compressed
sparse roll.

-Cooridnate list 3- column Rep
for every non zero element you need 3 things 
1 row number 
2 column number 
3 the element itself 

-Compressed sparse roll 
Represented using 3 arrays 
A[3,8,10,4,2,6,9,5]
IA[0, .......]
the first element is 0
takes the cumulative of number of elements 
*/

/*---------------------------------- Polynomial Representation ----------------
-if we have a polynomial we can represent it as dynamic array 

3x^5+2x^4+5x^2+2x+7

coeff   3,2,5,2,7
Exp     5,4,2,1,0
struct term{
    int coeff;
    int Exp;
}

struct Poly{
    int n;
    struct term *t;
}

struct Poly p;
cout<<"no of none zeroe term"'
cin>> &p.n;
p.t = new Term[p.n];
cout<<"Enter poly Terms";
for(i=0;i<p;i++){
    cout<<i+1;
}



*/
int main()
{
    cout << "hello world";
}
