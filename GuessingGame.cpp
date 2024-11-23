#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> 
using namespace std;

int main() {
    char choice;
    do {
        system("cls");
        srand(static_cast<unsigned int>(time(0)));

        int randomNumber = rand() % 100 + 1;
        int ans;

        cout << " -----------------------------------" << endl;
        cout << "|  Welcome to Number Guessing Game  |" << endl;
        cout << " -----------------------------------" << endl;
        cout << endl << "I have generated a random number between 1 and 100" << endl;

        do {
            cout << endl << "Input your Guess: ";
            cin >> ans;

            
            if (cin.fail()) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear(); 
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                continue; 
            }

            if (ans > randomNumber) {
                cout << "-Guess is too high-" << endl;
            } else if (ans < randomNumber) {
                cout << "-Guess is too low-" << endl;
            } else {
                cout << "You have guessed it correctly!!! " << "The random number is " << randomNumber << endl;
            }

        } while (ans != randomNumber);

        cout << endl << "Do you want to play again? (Y/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
