/* Name: exercise_03-04.c
   Purpose: Solution to chapter 3, exercise 4 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Exercise 3-4: Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);
if the user enters:
10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are int 
variables and x is a float variable.) */

/* i == 10 because scanf expected a non-float integer value and it read the first integer value 
it found and stored it in i and put back the ".3".
x == 0.3 because scanf expected a float value but the "10" part of "10.3" was already scanned and 
stored into another variable, but it found the ".3" part of "10.3" and just gave the value "0.3" to 
x.
j == 5 because "5" was the next integer value it found. */

#include <stdio.h>

int main(void) {
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);    // enter "10.3 5 6"
    printf("i = %d\nx = %f\nj = %d\n", i, x, j);
    

    return 0;
}