// BankingAppCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <map>
/* So I am busy writing a banking system program which is going to simulate an actual banking system program
so no real money or API is being used. You will be able to create an account, perform transactions, check your 
balance,and check transaction history. And this will be running in a loop so you can obviously keep selecting the 
different options after you deposited,withdrawn etc.. So in the code I'll have to create classes and functions that
will work together. I'll see how I decide to build the program but let me outline a few things I'll do. - EMPR
*/

/* First thing in the program will be a class named Bank which contain defined functions for accounts, transactions, 
account numbers, transaction history, and whatever more functions you want in your class. As well as libraries. like
"accounts" to store user data and the program can access the info and "transactions" to store the transaction history.
Then I will create another class named BankAccount which deals with the account number name of the account holder, 
initial balance, withdrawing, depositing, and getting the balance. The first three are instance variables, might
make more functions in variables to help with the calculations. - EMPR
*/

/* Then I'll have a loop, I'll have it in a function or class. In the loop its going give the user options and for an 
option you choose, certain code is going to be executed. The options in the loop are: Create an account, Perform Transaction,
Check Balance, Transaction History, Exit. Then in the loop its also going to print those same options. It will want the user 
to input a certain number so if its that number it will go to a else if choice because the number equals it. The loop will 
break if exit is selected. Now a programming tip. No program is perfect and I can't expect myself to create perfect classes and
functions but i can keep improving on the instead of out write deleting them so i can move forward. - EMPR
*/

using namespace std;

class Bank {
    // Creating libraries that our functions will use
    map<int, string> account_library;
    map<int, string> transaction_library;
    // Defining functions 
    int bank_accounts() {
    };
    int bank_transactions(){
    }
    int account_numbers() {
    };
    int transaction_history() {
    };

};

class BankAccount {
    // Declaring instance variables
    int account_holder;
    int initial_balance;
    int withdrawing;
    // Defining functions
    int depositing() {
    };
    int getting_balance() {
    };


};

int main()
{
    while (true) {
        for (int i = 1; i <= 4; ++i) {
            int number;

            // This prints out the bank system //

            cout << "Greeting! Welcome to EMPR Bank!\n";
            cout << "1. Create an Account\n";
            cout << "2. Perform Transaction\n";
            cout << "3. Check Balance\n";
            cout << "4. Transaction History\n";
            cout << "5. Exit\n";
            cout << "Enter your choice : ";
            cin >> number;
            cout << "You have selcted option: " << number << endl;

            return 0;
        }
        
    }
    
}