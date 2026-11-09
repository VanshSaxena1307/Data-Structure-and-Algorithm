#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    stack<int> s;

    if (n == 0) {
        cout << "Octal: 0";
        return 0;
    }

    while (n > 0) {
        s.push(n % 8);
        n /= 8;
    }

    cout << "Octal: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}