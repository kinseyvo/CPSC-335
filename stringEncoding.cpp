#include <iostream>
#include <string>
using namespace std;

void stringEncoding(string s) {
    for (int i = 0; i < s.length(); i++) {
        
        int letter_count = 1;
        while (s[i] == s[i + 1]) {
            letter_count++;
            i++;
        }

        if (letter_count > 1) {
            cout << letter_count << s[i];
        }
        else {
            cout << s[i];
        }
    }
    cout << endl;
}

int main()
{
    string input;
    cout << "This program takes in a string and gives a run-length endcoding." << endl;
    cout << "Enter a string: ";
    getline(cin, input);

    stringEncoding(input);

    return 0;
}