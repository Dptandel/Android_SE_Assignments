// Accept 5 expense from user and find average of expense

#include <stdio.h>

int main () {
    float expense_1, expense_2, expense_3, expense_4, expense_5, total_expense;
    float avg_expense;
    
    printf ("Enter Expenses of User: ");
    scanf ("%f %f %f %f %f", &expense_1, &expense_2, &expense_3, &expense_4, &expense_5);

    //Total expense
    total_expense = expense_1 + expense_2 + expense_3 + expense_4 + expense_5;
    printf ("Total Expense: %f", total_expense);

    //Average expense
    avg_expense = total_expense / 5;
    printf ("\n Average Expense: %f", avg_expense);

    return 0;
}