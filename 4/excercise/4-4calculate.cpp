/*
 * @Author: Steven G
 * @Date: 2022-12-23 15:22:06
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-23 15:29:42
 */

#include "../../std_lib_facilities.h"

void calculate(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        cout << num1 + num2 << '\n';
        break;
    case '-':
        cout << num1 - num2 << '\n';
        break;
    case '*':
        cout << num1 * num2 << '\n';
        break;
    case '/':
        cout << num1 / num2 << '\n';
        break;
    }
}

int main()
{
    double num1, num2;
    char op;
    cout << "please enter num1 operator num2 to calculate: ";
    cin >> num1 >> op >> num2;
    calculate(num1, num2, op);
    return 0;
}