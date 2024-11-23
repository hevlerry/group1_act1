#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int num1, num2;
    char operation, choice;

    do {
        system("cls");
        cout << " ***********************" << endl;    
        cout << "*  Simpleng Calculator * " << endl;
        cout << "*                      * " << endl;
        cout << " ***********************" << endl;

        
        cout << "\nEnter first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a valid integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        
        cout << "Enter second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a valid integer: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }

        
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;
        while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "Invalid operation. Please choose (+, -, *, /): ";
            cin >> operation;
        }

        
        switch (operation) {
            case '+':
                cout << "\nResult: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "\nResult: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "\nResult: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "\nResult: " << num1 / num2 << endl;
                } else {
                    cout << "/nError: Division by zero!" << endl;
                }
                break;
        }

        cout << endl << "Would you like to calculate again? (y/n): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
