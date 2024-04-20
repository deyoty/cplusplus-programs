#include <iostream>
using namespace std;

int main() {
    while (true) {
        try {
            int user_input;
            cout << "Please enter an integer value between 5 and 10: ";
            cin >> user_input;
            if (user_input >= 5 && user_input <= 10) {
                cout << "Your input value " << user_input << " has been accepted." << endl;
                break;
            } else {
                cout << "Please enter an integer value between 5 and 10." << endl;
            }
        } catch (...) {
            cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
        }
    }
    return 0;
}
