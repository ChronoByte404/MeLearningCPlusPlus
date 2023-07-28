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

    string add = "Bye,";

    string newtext = edit.replace(0, keyword.size(), add);

    cout << "\n" << newtext;

    if (newtext.size() > edit.size()) {
      cout << "Edited text is bigger than original.";
    }

    else {
      cout << "It does not, lol.";
    }

    return 0;
}
