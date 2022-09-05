/* Name: project_03-04.c
   Purpose: Solution to chapter 3, project 4 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 3-4: Write a program that prompts the user to enter a telephone number 
in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx: 
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900 
You entered 404.817.6900 */

#include <stdio.h>

int main(void) {
    unsigned area_code, office_code, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" ( %d ) %d - %d", &area_code, &office_code, &line_number);

    printf("You entered %3d.%3d.%4d\n", area_code, office_code, line_number);

    return 0;
}