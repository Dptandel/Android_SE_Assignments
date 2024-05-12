// Write a program in C to calculate and print the electricity bill of a given customer. 
// The customer ID, name, and unit consumed by the user should be captured from the keyboard 
// to display the total amount to be paid to the customer.
// The charge are as follow :
//                Unit                           charge/unit
//              upto 350                            @1.20
//   350 and above but less than 600                @1.50
//   600 and above but less than 800                @1.80
//            800 and above                         @2.00
// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-

#include <stdio.h>
#include <string.h>

int main() {
    int customer_id, consumed_units;

    float charge, surcharge = 0, bill, net_bill;

    char customer_name[25];

    printf("Input Customer ID :");
    scanf("%d", &customer_id);
    printf("Input the name of the customer :");
    scanf("%s", customer_name);
    printf("Input the unit consumed by the customer : ");
    scanf("%d", &consumed_units);

    if (consumed_units < 350) {
        charge = 1.20;
    } else if (consumed_units >= 350 && consumed_units < 600) {
        charge = 1.50;
    } else if (consumed_units >= 600 && consumed_units < 800) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }

    bill = consumed_units * charge;

    if (bill > 800) {
        surcharge = bill * 0.18;
    }

    net_bill = bill + surcharge;

    if (net_bill < 256) {
        net_bill = 256;
    }

    printf("\n Electricity Bill \n");
    printf("Customer ID NO.                     :%d\n", customer_id);
    printf("Customer Name                       :%s\n", customer_name);
    printf("unit Consumed                       :%d\n", consumed_units);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", charge, bill);
    printf("Surchage Amount                     :%8.2f\n", surcharge);
    printf("Net Bill Paid By the Customer       :%8.2f\n", net_bill);

    return 0;
}