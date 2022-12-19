/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:33:23
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:36:18
 */

// This program decides if a number is odd or even

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    if (integer % 2 == 1)
    {
        cout << "The value " << integer << " is an odd number\n";
        return 0;
    }
    else
    {
        cout << "The value " << integer << " is an even number\n";
        return 0;
    }
}