/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:36:06
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 10:36:06
 */

// This program takes in operation and two oprends

#include "../../std_lib_facilities.h"

int main()
{
    string op;
    int a, b;
    cout << "Enter an operation and two integers followed by it: ";
    cin >> op >> a >> b;

    if (op == "+" | op == "plus")
    {
        cout << a + b << "\n";
    }
    if (op == "-" | op == "minus")
    {
        cout << a - b << "\n";
    }
    if (op == "*" | op == "multiply")
    {
        cout << a * b << "\n";
    }
    if (op == "/" | op == "divide")
    {
        cout << a / b << "\n";
    }
    return 0;
}