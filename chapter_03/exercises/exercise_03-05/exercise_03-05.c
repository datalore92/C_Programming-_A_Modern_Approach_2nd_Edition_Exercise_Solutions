/* Name: exercise_03-05.c
   Purpose: Solution to chapter 3, exercise 5 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Exercise 3-5: Suppose that we call scanf as follows: 
scanf("%f%d%f", &x, &i, &y);
If the user enters: 
12.3 45.6 789
What will be the values of x, i, and y after the call? (Assume that x and y are float 
variables and i is an int variable.) */

/* x == 12.3, it was read correctly by scanf.
i == 45, since i is an int, it didn't add ".6" to it.
y == 0.6, because 0.6 was the next float value scanf found. */

#include <stdio.h>

int main(void) {
    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);    // enter "12.3 45.6 789"
    printf("x = %f\ni = %d\ny = %f\n", x, i, y);

    return 0;
}