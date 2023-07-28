#include <iostream>
#include <cstdlib> // Include this for std::system
using namespace std;

int main() {
    char ch = 'h';
    cout << ch;
    cout << "This is C++ Programming";
    cout << "\nHello, I am Jarvis.";

    string keyword = "Hello,";
    string edit = "Hello, how are you?";
    cout << edit;

    cout << "Your answer: ";

    string userInput;
    getline(cin, userInput);

    cout << "You entered: " << userInput << endl;

    string response;

    if (userInput == "Good") {
        response = "Good, glad to hear.\n";
    } else if (userInput == "Bad") {
        response = "Oh no, that's not good.\n";
    } else {
        response = "What?\n";
    }

    cout << response;

    string add = "Bye,";
    string oldedit = edit;
    string newtext = edit.replace(0, keyword.size(), add);
    cout << "\n" << newtext;

    float num1 = newtext.size();
    float num2 = oldedit.size();

    if (num1 > num2) {
        cout << "Edited text is bigger than original.";
    } else if (num1 < num2) {
        cout << "Edited text is smaller than original.";
    } else {
        cout << "Both text variables are the same size.";
    }

    // Convert the response to a C-style string and use std::system
    int result = std::system(("say '" + response + "'").c_str());

    return 0;
}
