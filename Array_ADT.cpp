#include <iostream>
#include <algorithm>
using namespace std;

/*----------------------------------Linear Search--------

*/

int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
    for (int i = 0; i < 7; i++)
    {

        if (key == arr[i])
        {
            cout << " found ";
        }
        cout << " " << arr[i];
    }
    // time - O(n)
    /*
    Moving a key element which is repeatly searched 1 step forward, which will
    improve time complexity.
    -This process is called Transposition.
    */
    for (int i = 0; i < 7; i++)
    {
        if (key == arr[i])
        {
            swap(arr[i], arr[i - 1]);
        }
    }
    /*
    Another better way would be to swap the key element with the first elemnt in the array.

    */
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        if (key == arr[i])
        {
            swap(arr[i], arr[0]);
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << " " << arr[i];
    }
}