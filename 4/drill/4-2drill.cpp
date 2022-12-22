/*
 * @Author: Steven G
 * @Date: 2022-12-22 15:25:30
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 15:27:05
 */
#include "../../std_lib_facilities.h"

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a < b)
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