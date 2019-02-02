/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int trackingCodes, i, lengthOfCode, typeOfCode;
    int sum = 0;
    scanf("%d",&trackingCodes);
    for(i = 0; i < trackingCodes; i++){
        scanf("%d %c", &lengthOfCode, &typeOfCode);
        if(typeOfCode == 'i'){
            sum += lengthOfCode * 4;
        } else if(typeOfCode == 'c'){
            sum += lengthOfCode * 1;
        } else if(typeOfCode == 'd'){
            sum += lengthOfCode * 8;
        } else {
            printf("Invalid tracking code type\n");
            sum = 0;
            break;
        }
    }
    if(sum > 0){
        printf("%d bytes",sum);
    }
    return 0;
}