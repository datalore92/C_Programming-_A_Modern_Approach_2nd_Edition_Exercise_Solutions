/* Name: project_02-03.c
   Purpose: Solution to chapter 2, project 3 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-3: Modify the program of Programming Project 2 so that it prompts the user to 
enter the radius of the sphere. */

#include <stdio.h>

int main(void) {
    float v, r, pi = 3.14159f, fraction = 4.0f / 3.0f;

    printf("Please enter the radius of the sphere: ");
    scanf("%f", &r);
    v = fraction * pi * (r * r * r);
    printf("Volume of a sphere with a %.2f meter radius is: %.2f\n", r, v);

    return 0;
}