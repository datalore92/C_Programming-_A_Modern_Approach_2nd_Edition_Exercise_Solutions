/* Name: exercise_02-03.c
   Purpose: Solution to chapter 2, exercise 3 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Exercise 2-3: Condense the dweight.c program by (1) replacing the assignments to 
height, length, and width with initializers and (2) removing the weight variable, 
instead calculating (volume + 165) / 166 within the last printf. */

#include <stdio.h>

int main(void) {
    int height = 2, length = 4, width = 6;
    int volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}