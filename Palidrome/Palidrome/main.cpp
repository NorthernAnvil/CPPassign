#include <iostream>

using namespace std;

string userInput;

bool isPali(const string& str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start++] != str[end--])
            
            return false;
    }
    
    return true;
}

int main() {
	cout << "Enter a word: ";
	cin >> userInput;

    if (isPali(userInput) == true) {
        cout << "pali" << endl;
    }
    else {
        cout << "not pali" << endl;
    }
}