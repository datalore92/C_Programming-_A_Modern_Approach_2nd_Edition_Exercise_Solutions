/* Name: project_03-05.c
   Purpose: Solution to chapter 3, project 5 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 3-5: Write a program that asks the user to enter the numbers from 1 to 16 
(in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the 
sums of the rows, columns, and diagonals: 
Enter the numbers from 1 to 16 in any order: 
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34 
Column sums: 34 34 34 34
Diagonal sums: 34 34 

If the row, column, and diagonal sums are all the same (as they are in this example), 
the numbers are said to form a magic square. The magic square shown here appears in a 
1514 engraving by artist and mathmetician Albrecht Durer. (Note that the middle numbers 
in the last row give the date of the engraving.) */

#include <stdio.h>
#define ARRSIZE 16

int main(void) {
    int arr[ARRSIZE];

    printf("Enter the numbers from 1 to 16 in any order: \n");
    for (int *arrp = arr; arrp != &arr[ARRSIZE]; ++arrp) {
        scanf(" %d", arrp);
    }

    for (int i = 1, *arrp = arr; i <= ARRSIZE; ++i, ++arrp) {
        printf("%2d", *arrp);
        if (i % 4 == 0) {
            putchar('\n');
        }
        else {
            putchar(' ');
        }
    }

    return 0;
}