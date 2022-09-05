/* Name: exercise_03-03.c
   Purpose: Solution to chapter 3, exercise 3 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Exercise 3-3: For each of the following pairs of scanf format strings, indicate 
whether or not the two strings are equivalent. If they're not, show how they can be 
distinguished. 
(a) "%d"            versus " %d"
(b) "%d-%d-%d"      versus "%d -%d -%d"
(c) "%f"            versus "%f "
(d) "%f,%f"         versus "%f, %f"
*/

/*
(a) Equivalent because "a white-space character in a format string matches any number of 
white-space characters in the input, including none."
(b) Equivalent because "a white-space character in a format string matches any number of 
white-space characters in the input, including none."
(c) Not equivalent because scanf expects a blank immediately after the float in "%f ", whereas 
"%f" does not require a blank after the float.
(d) Equivalent because "a white-space character in a format string matches any number of 
white-space characters in the input, including none."
*/

#include <stdio.h>

// for visualization purposes
int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8;
    float f1, f2, f3, f4, f5, f6;

    printf("enter d1: ");
    scanf("%d", &d1);
    printf("enter d2: ");
    scanf(" %d", &d2);
    printf("enter d3, d4, and d5: ");
    scanf("%d-%d-%d", &d3, &d4, &d5);
    printf("enter d6, d7, and d8: ");
    scanf("%d -%d -%d", &d6, &d7, &d8);
    
    printf("enter f1: ");
    scanf("%f", &f1);
    printf("enter f2: ");
    scanf("%f ", &f2);
    printf("enter f3 and f4: ");
    scanf("%f,%f", &f3, &f4);
    printf("enter f5 and f6: ");
    scanf("%f, %f", &f5, &f6);

    printf("\nd1 = %d\nd2 = %d\nd3 = %d\nd4 = %d\nd5 = %d\nd6 = %d\nd7 = %d\nd8 = %d\n", d1, d2, d3, d4, d5, d6, d7, d8);
    printf("f1 = %f\nf2 = %f\nf3 = %f\nf4 = %f\nf5 = %f\nf6 = %f\n", f1, f2, f3, f4, f5, f6);

    return 0;
}