#include <iostream>
#include <algorithm>
using namespace std;

/*----------------------------------. Get( ) Set( ) Avg( ) Max( ) functions on Array--------
*******Get()

int Get(index)
{
    if (index >= 0 && index < Length)
    {
        return arr[index];
    }
}
- The time complexity is constant so O(1);
*******Set()

    - also similar to the get function
    used to replace a value at a particular index,
    or over riding.

        int Set(index, x)
{
    if (index >= 0 && index < Length)
    {
        arr[index] = x;
    }
}
- time complexity is constant
        *******
        Max() -
    finding the maximum element in a array
    int Max(arr[])
{
    int max = arr[0];

    for (i = 1; i < length; i++)
    {
        if (Arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
time - O(n)
*/
int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
}