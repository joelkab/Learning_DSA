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
}/*----------------------------------Merging Arrays --------
- trying to merge two sorted arrays you must create antoher array with the size of both arrays.
A 3,8,16,20,25
B 4,10,12,22,23
c - empty array wih size A+B

i =0;
j =0;
k =0; represents the index of  C
1- check if the first element in A is less than the first element B
2- if true add that element of A to C and i++(move to the next element of array A);
3- else add the element of B to C j++(next element of array B)

while(i<m&&j<n) {
if(A[i]< B[i]){
    c[k++] = A[i++];
} else {
    c[k++]= B[j++]
    }
}

for(i<m ;i++){
    c[k++]= A[i];
}
for(j<n;j++){
    c[k++] = B[j];
}

time = θ(m+n)
m+n is usally for merging
*/

int main()
{
    int arr[7] = {8, 9, 3, 2, 5, 6, 7};
    int key = 5;
}