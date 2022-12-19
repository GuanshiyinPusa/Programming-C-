/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:29:29
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:36:48
 */

// This program takes in operation and two oprends

#include "../../std_lib_facilities.h"

// 2022.9.30 3:01AM
// This program compares two numbers

#include "../../std_lib_facilities.h"

int main()
{
    int val1;
    int val2;
    cout << "Please enter two inteters: \n";
    cin >> val1 >> val2;
    cout << "min(val1,val2) == " << min(val1, val2) << '\n';
    cout << "max(val1,val2) == " << max(val1, val2) << '\n';
    cout << "sum(val1,val2) == " << val1 + val2 << '\n';
    cout << "dif(val1,val2) == " << val1 - val2 << '\n';
    cout << "prod(val1,val2) == " << val1 * val2 << '\n';
    cout << "ratio(val1,val2) == " << val1 / val2 << '\n';
    return 0;
}