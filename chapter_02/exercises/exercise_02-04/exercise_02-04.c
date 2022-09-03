/* Name: exercise_02-04.c
   Purpose: Solution to chapter 2, exercise 4 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Exercise 2-4: Write a program that declares several int and float variables -- 
without initializing them -- and then prints their values. Is there any pattern to 
the values? (Usually there isn't.) */

/* There is no pattern to the values. */

#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4;
    float f1, f2, f3, f4;

    printf("INTS:\ni1 = %d\ni2 = %d\ni3 = %d\ni4 = %d\n", i1, i2, i3, i4);
    printf("FLOATS:\nf1 = %f\nf2 = %f\nf3 = %f\nf4 = %f\n", f1, f2, f3, f4);

    return 0;
}