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
/*-----------------------------------s--------- Tree Recursion-----------
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




void main()
{
    cout << "hello world";
}