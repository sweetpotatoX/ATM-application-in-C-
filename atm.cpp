#include <iostream>
using namespace std;

void showMenu() {
    cout << "**************Menu******************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************************" << endl;
}
int main ()
{
    //check balance, deposit, withdraw, showMenu
    int option;
    double balance = 500;

do {
    showMenu();
    cout << "option: ";
    cin >> option;
    system("cls");

    switch (option) {
        case 1:
            cout << "Balance is " << balance << "$" << endl;
            break;
        case 2:
            cout << "Deposit amount ";
            double depositamount;
            cin >> depositamount;
            balance += depositamount;
            break;
        case 3:
            cout << "Withdraw amount ";
            double withdrawamount;
            cin >> withdrawamount;
            if (withdrawamount <= balance)
                balance -= withdrawamount;
            else
                cout << "Not enough funds to withdraw " << endl;
            break;
    }
} while (option != 4) ;

    system("pause>0");
}
