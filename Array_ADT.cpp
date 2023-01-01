#include <iostream>
#include <algorithm>
using namespace std;

/*----------------------------------Reversing an Array--------
First Method
- You need two indices i and j. i at the begining of the loop and j at the end of the loop.  both indices will interchange
then increment i and decrement j. repeat the steps untill i is greater than j.

for(i = 0; j = length -1; i <j; i++, j--){
    temp = A[i];
    A[i]= A[j];
    A[j]= temp;
}
time - O(n)
/*----------------------------------left shift/ rotate an Array--------
- shift all the elements of an array to the left side.
- you will lose the first element 
*Rotation means the deleted element will be copied at the end of the array
W,E,l,CO,M,E , , ,
E,l,CO,M,E , , ,W


time - O(n)
*/
int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
}