/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:57:59
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:58:23
 */

#include "../../std_lib_facilities.h"
// This displayed how if statement works
int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter two integers\n";
    cin >> a >> b;
    if (a < b) // condition
        // 1st alternative (taken if condition is true):
        cout << "max(" << a << "," << b << ") is " << b << "\n";
    else
        // 2nd alternative (taken if condition is false):
        cout << "max(" << a << "," << b << ") is " << a << "\n";
}