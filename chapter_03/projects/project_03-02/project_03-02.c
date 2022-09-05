/* Name: project_03-02.c
   Purpose: Solution to chapter 3, project 2 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 3-2: Write a program that formats product information entered by the user. 
A session with the program should look like this: 
Enter item number: 583 
Enter unit price: 13.5 
Enter purchase date (mm/dd/yyyy): 10/24/2010 
Item            Unit            Purchase        
                Price           Date
583             $  13.50        10/24/2010 
The item number and date should be left justified; the unit price should be right 
justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns. */

#include <stdio.h>

int main(void) {
    unsigned item_num, purchase_day, purchase_month, purchase_year;
    float item_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &item_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &purchase_month, &purchase_day, &purchase_year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", 
    item_num, item_price, purchase_month, purchase_day, purchase_year);

    return 0;
}