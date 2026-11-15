#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cin >> exp;

    stack<int> s;

    for (int i = exp.length() - 1; i >= 0; i--) {
        char ch = exp[i];

        if (isdigit(ch))
            s.push(ch - '0');
        else {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            if (ch == '+') s.push(a + b);
            else if (ch == '-') s.push(a - b);
            else if (ch == '*') s.push(a * b);
            else if (ch == '/') s.push(a / b);
        }
    }

    cout << s.top();
    return 0;
}