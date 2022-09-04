/* Name: project_02-05.c
   Purpose: Solution to chapter 2, project 5 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-5: Write a program that asks the user to enter a value for x and then 
displays the value of the following polynomial: 
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself 
repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.) */

#include <stdio.h>

int main(void) {
    float x, result;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\nWhat is the value of x?: ");
    scanf("%f", &x);
    result = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    printf("The result of the polynomial if x == %.2f is: %.2f\n", x, result);
    
    return 0;
}