#include <iostream>
using namespace std;
/*
 A Recursive function is a functions that calls itself

 Type fun(param) {
    if(<basecondition>){
        ----
        fun(parm);
        ----
    }
 }
*/

void fun1(int n)
{
    if (n > 0)
    {
        cout << " " << n;
        fun1(n - 1);
    }
}
/*
the output is 321. this first function will fist output n then the recursive call was made.
*/
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        cout << " " << n;
    }
}
/*
the output is 123. this first function will fist call the function fun1 then output n.
*/

/* NOTES
-Recursive functions hae two phases which are ascending and descending.
-Recursion is also like repeating but the main difference is a loop will have only ascending phase
but the recursion will have ascending and descending.

*/

void main()
{
    cout << "hello world";
}