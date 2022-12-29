#include <iostream>
using namespace std;

/*---------------------------Calculate e^x by Recursion ( using Taylor Series )-----------
 */
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
 
    // Termination condition
    if (n == 0)
        return 1;
 
    // Recursive call
    r = e(x, n - 1);
 
    // Update the power of x
    p = p * x;
 
    // Factorial
    f = f * n;
 
    return (r + p / f);
}
 
int main()
{

    cout << e(1, 10);
}