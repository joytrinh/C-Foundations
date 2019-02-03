/******************************************************************************

Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

*******************************************************************************/
#include <stdio.h>
void reverseArray(int *);

int main()
{
    //! showMemory(start=65520)
    int arr[6];
    int i;
    for(i = 0; i < 6; i++){
        scanf("%d\n", &arr[i]);
    }
    reverseArray(arr);
    for(i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverseArray(int * ptr){
    int i;
    for(i = 0; i < 3; i++){//6 elements only need 6/2=3 reverse times
        int tmp = * (ptr + i);
        * (ptr + i) = * (ptr + 6-1-i);
        * (ptr + 6-1-i) = tmp;
    }
}