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
/*----------------------------------Inserting an element in a sorted list--------

A= 4,8,9,14,25,67,78

we want to insert 20 , so we have to right shift all elements greater than 20.
Insert 20
int insert(array[], int num){
    x = num;
    i = length -1;
    while (arr[i] > x){
        arr[i+1] = A[i];
        i --;
    }
    arr[i+1] = x;
}/*----------------------------------Checking if a list is sorted--------

Bool isSorted(A, n){
    for(i = 0;i<n-1; i++){
        if(A[i] > A[i+1]){
            return false;
        }
        return true;
    }
}

*/

int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
}