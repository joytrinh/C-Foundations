/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void) {
    int age;
    int *ageptr; // add a line here that declares an integer pointer named "ageptr"
    
    scanf("%d", &age);
    ageptr = &age; // add a line here that stores the address of age in ageptr
    
    printf("The secret address is... ");
    printf("%p\n", ageptr); // add a line here that prints out the address stored in ageptr
    
    printf("Now take three drops of the magic elixir. \n");
    *ageptr = *ageptr - 5; // add a line that uses only ageptr to lower the age by 5 years
    
    printf("Did the elixir work? You are %d years old!", age);
    return 0;
}