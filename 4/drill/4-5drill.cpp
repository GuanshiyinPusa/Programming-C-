/*
 * @Author: Steven G
 * @Date: 2022-12-22 15:31:10
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 15:33:22
 */

#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    double a, b;
    while (cin >> a >> b)
    {
        if (a == b)
        {
            cout << "the numbers are equal" << '\n';
        }
        else if (abs(a - b) < 1.0 / 100)
        {
            cout << "the numbers are almost equal\n";
        }
        else if (a < b)
        {
            cout << "The smaller value is: " << a << '\n';
            cout << "The larger value is: " << b << '\n';
        }
        else
        {
            cout << "The smaller value is: " << b << '\n';
            cout << "The larger value is: " << a << '\n';
        }
    }
    return 0;
}