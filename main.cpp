#include <iostream>
using namespace std;

int main() {
    cout << "==================\n Guess The Number\n==================\n" << endl;

    srand(time(NULL));
    int number;
    char input;

    while (true){
        int randNum = rand() % 101;

        while (number != randNum) {
            cout << "Enter A Number Between 0 and 100: ";
            cin >> number;

            if (number < randNum) {
                cout << "Higher" << endl;
            }
            else if (number > randNum) {
                cout << "Lower" << endl;
            }
        }

        cout << "\nYou Win!\nThe Number Was " << number << endl;
        cout << endl;

        cout << "Enter 'Y' To Play Again: ";
        cin >> input;
        cout << endl;

        input = tolower(input);
        if (input != 'y') {
            exit(0);
        }
    }
}