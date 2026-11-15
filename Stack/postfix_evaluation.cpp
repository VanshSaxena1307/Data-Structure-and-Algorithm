#include <bits/stdc++.h>
using namespace std;

int main() {
    string exp;
    cin >> exp;

    stack<int> s;

    for (char ch : exp) {
        if (isdigit(ch))
            s.push(ch - '0');
        else {
            int b = s.top();
            s.pop();
            int a = s.top(); 
            s.pop();

            if (ch == '+') s.push(a + b);
            else if (ch == '-') s.push(a - b);
            else if (ch == '*') s.push(a * b);
            else if (ch == '/') s.push(a / b);
        }
    }

    cout << s.top();
    return 0;
}