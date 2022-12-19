/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:32:48
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:36:25
 */

// This program order three integers from left to right

#include "../../std_lib_facilities.h"

int main()
{
    string a;
    string b;
    string c;
    cout << "Please enter three stringss: ";

    cin >> a >> b >> c;

    if (a < b)
    {
        if (b < c)
        {
            cout << a << ' ' << b << ' ' << c << "\n";
            return 0;
        }
        if (c < a)
        {
            cout << c << ' ' << a << ' ' << b << "\n";
            return 0;
        }
        else
        {
            cout << a << ' ' << c << ' ' << b << "\n";
            return 0;
        }
    }
    if (b < a)
    {
        if (a < c)
        {
            cout << b << ' ' << a << ' ' << c << "\n";
            return 0;
        }
        if (c < b)
        {
            cout << c << ' ' << b << ' ' << a << "\n";
            return 0;
        }
        else
        {
            cout << b << ' ' << c << ' ' << a << "\n";
            return 0;
        }
    }
}