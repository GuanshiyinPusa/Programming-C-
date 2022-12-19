/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:28:20
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:36:53
 */

// This program converts miles to kilomiles

#include "../../std_lib_facilities.h"

int main()
{
    double miles;
    double kilometers;
    cout << "Please enter miles: ";
    cin >> miles;
    kilometers = miles * 1.609;
    cout << miles << " miles in kilometers is " << kilometers << "\n";
    return 0;
}