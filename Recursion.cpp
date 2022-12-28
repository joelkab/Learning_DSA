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

- Recursive functions utilize stack - which takes up a lot of memory.
therefor recursive functions are memoory consuming
*/

/* Time Complexity of Recursion
Both function above take up 3 unites of time. becasue the functon is being called 3 times.
- time depends of the value that we are passing in.
- O(n)
*/

///////////////////////////////////

/* Tail recursion
- the last statemnt in a function is called a tail recursion.
void fun(n){
    if(n>0){
        ----
        ----
        fun(n-1);
    }
}
but if theres an operation or anything done after the function call then its no longer
a tail recursive function.
void fun(n){
    if(n>0){
        ----
        ----
        fun(n-1)+n;
    }
}
for this function the addition operation wont be of use untill the function is over
-tail recursion means at returning time the function hasnt has to perform anything.
-can easily be converted to loops 
-time - O(n)
-space - O(n)
// loops
-time - O(n)
-space - O(1)
* incase of tail recursion loops are better

*/
///////////////////////////////////

/* Head recursion
- the function doesnt have to process or perfrom any operation at the time of calling
void fun(n){
    if(n>0){
        fun(n-1)+n;
        ----
        ----
    }
}
- can not be easliy converted to a loop but its possible.
*/
void main()
{
    cout << "hello world";
}
