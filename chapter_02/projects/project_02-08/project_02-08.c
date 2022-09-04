/* Name: project_02-08.c
   Purpose: Solution to chapter 2, project 8 of C Programming: A Modern Approach.
   Author: datalore92 */

/* Project 2-8: Write a program that calculates the remaining balance on a loan after the first, 
second, and third monthly payments: 
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point. Hint: Each month, the balance 
is decreased by the amount of the payment, but increased by the balance times the monthly 
interest rate. To find the monthly interest rate, convert the interest rate entered by the user 
to a percentage and divide it by 12. */

#include <stdio.h>

float bal_rem(float, float, float, unsigned);
void ordinal(unsigned cardinal);

int main(void) {
    float loan_amount, interest_rate, monthly_payment, monthly_interest_rate, balance;
    unsigned payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    balance = loan_amount;
    monthly_interest_rate = (interest_rate / 100.00f) / 12.00f;
    putchar('\n');
    
    for (payments = 1; payments < 4; ++payments) {
        printf("Balance remaining after ");
        ordinal(payments);
        printf(" payment: $%.2f\n", bal_rem(monthly_interest_rate, balance, monthly_payment, payments));
    }
    
    return 0;
}

// bal_rem: returns the remaining balance after a payment or payments
float bal_rem(float mon_int_rate, float bal, float mon_pay, unsigned payments) {
    float prepay_bal = bal, postpay_balance = bal;
    
    for (unsigned i = 0; i < payments; ++i) {
        postpay_balance -= mon_pay;
        postpay_balance += prepay_bal * mon_int_rate;
        prepay_bal = postpay_balance;
    }
    return postpay_balance;
}

// ordinal: prints a string of the ordinal form of cardinal numbers
void ordinal(unsigned cardinal) {
    switch (cardinal) {
        case 1:
            printf("first");
            break;
        case 2:
            printf("second");
            break;
        case 3:
            printf("third");
            break;
        default:
            break;
    }
}