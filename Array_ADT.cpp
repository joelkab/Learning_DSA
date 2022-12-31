#include <iostream>
#include <algorithm>
using namespace std;

/*----------------------------------Binary Search--------
- In order to use Binary Search every element inside an array must be sorted
- To perform binary search, you need 3 index variables, which are lower,high and mid. mid is low + high / 2
- to check if a element is not in a list, is by checking if low is greater than high, low should always be on the left side while high on the
right side.

Algo BinSearch(L, h, key)
{
    while (l <= h)
    {
        mid = (L + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            L = mid + 1;
        }
    }
}
*/

/*----------------------------------Binary Search uisng Recursion--------
Algo RBInSearch(L,h,key){
    if(L<=h){
        mid = (L+h)/2;
        if(key== arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            return RBInSearch(L,mid-1,key);
            
        }
        else{
            return RBInSearch(mid+1,h,key);
        }
    }
}
*/

int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
    
}