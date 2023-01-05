#include <iostream>
using namespace std;
/*----------------------------------Symmetric Matrix--------
-Elements from a Symmetric matrix usually have equal elements to row and column
 for example, if matrix row and column are equal to the column and row then it's a symmetric matrix
- for storing a symmetric matrix you don't have to create a two-dimensional array, you can take a single array.

*/
/*----------------------------------Tri-Diagonal and Tri - Bamd Matrix--------
Elements are stored mean diagonal, lower diagonal, and upward diagonal. while the rest of the elements are zeroes.

- the definition of a tri-diagonal matrix is
M[i,j] = non-zero if [i-j] <= 1
m[i,j]= 0 if [i,j]> 1

the formula for mapping a tri-diagonal matrix in a single-dimensional array
Index(A[i][j])
    case 1 if i-j =1    index = i-1
    case 2 if i-j=0     index = n-1+i-1
    case 3 if i-j= -1   index  2n -1 +i-1


/*--------------- Square-Band Matrix--------
also similar to a tri diagonal
- has a mean diagonal and below that, there is more than one diagonal
*/

int main()
{
}