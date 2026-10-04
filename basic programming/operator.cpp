#include <iostream>
using namespace std;

int main()
{
    /*Types of Operators
    1. Assignment Operators
    2. Arithmetic Operators
    3. Relational Operators
    4. Logical Operators
    5. Bitwise Operators
    */

    // ARITHMETIC OPERATOR

    // 1. Binary
    // 2. Unary

    /*Binary
    1.Addition(+)
    2.Subtraction(-)
    3.Multiply(*)
    4.Division(/)
    5. Modulo(%)
    */

    /*Unary
    1.Increament(++)
    2.Decrement(--)*/

    float num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiply: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    return 0;
}