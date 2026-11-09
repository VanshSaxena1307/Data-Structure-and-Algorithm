#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    stack<char> s;

    if (n == 0) {
        cout << "Hexadecimal: 0";
        return 0;
    }

    while (n > 0) {
        int rem = n % 16;

        if (rem < 10)
            s.push(rem + '0');
        else
            s.push(rem - 10 + 'A');

        n /= 16;
    }

    cout << "Hexadecimal: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}