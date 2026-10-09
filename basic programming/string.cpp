#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    //cin.ignore();   // buffer clear

    cout << "Enter a full string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    return 0;
}
