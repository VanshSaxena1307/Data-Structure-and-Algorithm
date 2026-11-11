#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, base;
    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Enter base (2-36): ";
    cin >> base;

    if (base < 2 || base > 36) {
        cout << "Invalid base!";
        return 0;
    }

    stack<char> s;

    if (n == 0) {
        cout << "0";
        return 0;
    }

    while (n > 0) {
        int rem = n % base;

        if (rem < 10)
            s.push(rem + '0');
        else
            s.push(rem - 10 + 'A');

        n /= base;
    }

    cout << "Number in base " << base << " = ";

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}