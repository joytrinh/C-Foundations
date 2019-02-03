/******************************************************************************

Suppose you have made the following declarations:
    int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
    int *ptr1, *ptr2;
    ptr1 = array+2;
    ptr2 = &ptr1[5];

1. What is the value of *(ptr1+1) ?
2. What is the value of *(ptr2-3) ?

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
    int *ptr1, *ptr2;
    ptr1 = array+2;//From the address of the array or array[0] + 2*4bytes or array[0 + 2] = array[2] (move to the third element) = 12
    ptr2 = &ptr1[5];//From the address of ptr1 is array[2], we consider array[2 + 5] = array[7] = 0
    int a = *(ptr1 + 1);//from the address of ptr1 array[2], we move to the next element is array[2 + 1] = array[3] = -5
    int b = *(ptr2-3);//from the address of ptr2 array[7], we move back 3 elements is array[7-3] = array[4] = -7
    printf("%d %d", a, b);//-5 -7
    return 0;
}
