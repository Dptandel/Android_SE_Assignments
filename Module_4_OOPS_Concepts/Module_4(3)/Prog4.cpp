// 4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string account_holder_name;
        long account_number;
        int balance_amount = 1250000;

    public:
        // Function to assign values
        void assign_values(string acc_holder_name, long acc_num) {
            account_holder_name = acc_holder_name;
            account_number = acc_num;
        }

        // Function to deposit an amount
        void deposit() {
            int amount;
            cout << "Enter the amount to deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance_amount += amount;
                cout << "Amount deposited successfully." << endl;
                cout << "New balance: " << balance_amount << endl;
            } else {
                cout << "Invalid amount." << endl;
                cout << "Deposit failed." << endl;
            }

            cout << endl;
        }

        // Function to withdraw an amount after checking balance
        void withdraw() {
            int amount;
            cout << "Enter the amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance_amount) {
                balance_amount -= amount;
                cout << "Amount withdrawn successfully." << endl;
                cout << "New balance: " << balance_amount << endl;
            } else {
                cout << "Insufficient balance or invalid amount." << endl;
                cout << "Withdrawal failed." << endl;
            }

            cout << endl;
        }

        // Function to display name and balance
        void display_details() {
            cout << endl;
            cout << "Account Holder Name: " << account_holder_name << endl;
            cout << "Account Number: " << account_number << endl;
            cout << "Balance Amount: " << balance_amount << endl;
            cout << endl;
        }
};

int main() {
    string account_holder_name;
    long account_number;


    cout << "Account Holder Name: ";
    getline(cin, account_holder_name);
    
    cout << "Enter Account Number: ";
    cin >> account_number;

    BankAccount account;

    // Assign values
    account.assign_values(account_holder_name, account_number);

    // Display account details
    account.display_details();

    // Deposit some amount
    account.deposit();

    // Withdraw some amount
    account.withdraw();

    // Display account details
    account.display_details();

    return 0;
}