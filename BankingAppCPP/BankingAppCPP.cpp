// BankingAppCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
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

