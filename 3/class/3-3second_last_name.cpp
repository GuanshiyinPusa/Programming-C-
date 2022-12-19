/*
 * @Author: Steven G
 * @Date: 2022-12-19 18:00:08
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 18:00:56
 */

#include "../../std_lib_facilities.h"
int main()
{
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second; // read two strings
    cout << "Hello, " << first << " " << second << '\n';
}