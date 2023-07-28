#include <iostream>
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

    if (userInput == "Good") {
      cout << "Good, glad to hear." << endl;
    }
    else if (userInput == "Bad") {
      cout << "Oh no, that's not good." << endl;
    }
    else {
      cout << "What?" << endl;
    }

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

    return 0;
}
