#include <iostream>

using namespace std;

int main() {
    // Declare a character variable to store the input character
    char ch;

    // Prompt the user to enter a character
    cout << "Enter a character: ";

    // Read the input character from the user
    cin >> ch;

    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    }
    // Check if the character is an uppercase letter
    else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    }
    // If none of the above conditions are met, it's a special character
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
