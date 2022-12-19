/*
 * @Author: Steven G
 * @Date: 2022-12-19 18:08:18
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-19 18:08:18
 */

#include "../../std_lib_facilities.h"
// read first and second name
int main()
{
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;             // read two strings
    string name = first + ' ' + second; // concatenate strings
    cout << "Hello, " << name << '\n';
}