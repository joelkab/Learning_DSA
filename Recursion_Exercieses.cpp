#include <iostream>
using namespace std;

/*---------------------------Sum of first N natural Numbers-----------
 */
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return Sum(n - 1) + n;
    }
    // loop would be the best option
}

int main()
{

    cout << "Total" << Sum(7);
}