#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << endl;

    for (int i = 0; i < number; i++) {
        cout << fibonacci(i) << ", ";
    }

    cout << endl << number << "th term: " << fibonacci(number);
    return 0;
}