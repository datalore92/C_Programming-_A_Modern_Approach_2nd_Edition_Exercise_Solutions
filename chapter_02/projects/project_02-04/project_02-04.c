/* Name: project_02-04.c
   Purpose: Solution to chapter 2, project 4 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-4: Write a program that asks the user to enter a dollars-and-cents amount, 
then displays the amount with 5% tax added: 
Enter an amount: 100.00
With tax added: $105.00 */

#include <stdio.h>

int main(void) {
    float tax = 0.05f, amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount + (amount * tax));

    return 0;
}