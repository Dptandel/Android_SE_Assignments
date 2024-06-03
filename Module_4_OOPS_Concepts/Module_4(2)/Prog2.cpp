// 2. Define a class to represent a bank account. Include the following members:
//  Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
//  Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    public:
        string account_holder_name;
        long account_number;
        string account_type;
        int balance_amount = 1250000;

    public:
        // Function to assign values
        void assign_values(string name, long acc_num, string acc_type) {
            account_holder_name = name;
            account_number = acc_num;
            account_type = acc_type;
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
            cout << "Balance Amount: " << balance_amount << endl;
            cout << endl;
        }
};

int main() {
    string account_holder_name;
    long account_number;
    string account_type;

    cout << "Enter Account Holder Name: ";
    getline(cin, account_holder_name);

    cout << "Enter Account Number: ";
    cin >> account_number;

    cout << "Enter Account Type: ";
    cin >> account_type;

    BankAccount account;

    // Assign values
    account.assign_values(account_holder_name, account_number, account_type);

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
