/* Name: project_02-07.c
   Purpose: Solution to chapter 2, project 7 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-7: Write a program that asks the user to enter a U.S. dollar amount and then shows 
how to pay that amount using the smallest number of $20, $10, $5, and $1 bills: 
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then 
reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. 
Be sure to use integer values throughout, not floating-point numbers. */

#include <stdio.h>

int main(void) {
    unsigned amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    twenties = amount / 20;
    amount %= 20;
    tens = amount / 10;
    amount %= 10;
    fives = amount / 5;
    amount %= 5;
    ones = amount / 1;
    amount %= 1;
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, ones);

    return 0;
}