#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;

    for (char ch : str) {
        s.push(ch);
    }

    bool palindrome = true;

    for (char ch : str) {
        if (ch != s.top()) {
            palindrome = false;
            break;
        }
        s.pop();
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}