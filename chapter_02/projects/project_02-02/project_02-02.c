/* Name: project_02-02.c
   Purpose: Solution to chapter 2, project 2 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-2: Write a program that computes the volume of a sphere with a 10-meter radius, using 
the formula v=4/3*pi*r^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. 
What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply 
r by itself twice to compute r^3. */

#include <stdio.h>

int main(void) {
    float v, r = 10.0f, pi = 3.14159f, fraction = 4.0f / 3.0f;

    v = fraction * pi * (r * r * r);
    printf("Volume of a sphere with a 10-meter radius is: %.2f\n", v);

    return 0;
}