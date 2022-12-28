#include <iostream>
using namespace std;

/*-------------------------------------------- Linear Recursion-----------
- when a function is calling itself, anywhere inside the code thats
not in the top

void fun(n){
    if(n>0){
        fun(n-1)+n;
        ----
        ----
    }
}
*/
/*-------------------------------------------- Tree Recursion-----------
-If a recursive function is calling itself more than one time

void fun(n){
    if(n>0){
        ----
        fun(n-1)+n;
        ----
        ----
        fun(n-1)+n;
        ----
    }
}
program makes 15 total function calls
-time - O(2^n)
-Space - O(n) - n+1

*/
/*-------------------------------------------- Indirect Recursion-----------
- Two or more functions calling one another in a circlur fashion. for example function A calling function B while B is callng function
C, C calling A.

void funA(int n){
    if(n>0){
        cout<<n;
        funB(n-1);
    }
}
void funB(int n){
    if(n>0){
        cout<<n;
        funA(n/2);
    }
}
*/

void main()
{
    cout << "hello world";
}