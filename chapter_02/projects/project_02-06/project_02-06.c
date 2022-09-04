/* Name: project_02-06.c
   Purpose: Solution to chapter 2, project 6 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-6: Modify the program of Programming Project 5 so that the polynomial is 
evaluated using the following formula: 
((((3x + 2) * x - 5) * x - 1) * x + 7) * x - 6
Note that the modified program performs fewer multiplications. This technique for 
evaluating polynomials is known as Horner's Rule. */

#include <stdio.h>

int main(void) {
    float x, result;

    printf("((((3x + 2) * x - 5) * x - 1) * x + 7) * x - 6\nWhat is the value of x?: ");
    scanf("%f", &x);
    result = ((((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6);
    printf("The result of the polynomial if x == %.2f is: %.2f\n", x, result);
    
    return 0;
}