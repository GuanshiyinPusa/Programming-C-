/*
 * @Author: Steven G
 * @Date: 2022-12-19 18:06:48
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-19 18:06:48
 */

#include "../../std_lib_facilities.h"
// simple program to exercise operators
int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nsquare root of n == " << sqrt(n)
         << '\n'; // another name for newline (“end of line”) in output
}