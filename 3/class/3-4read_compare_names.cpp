/*
 * @Author: Steven G
 * @Date: 2022-12-19 22:09:21
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 22:09:44
 */

#include "../../std_lib_facilities.h"
// read and compare names
int main()
{
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second; // read two strings
    if (first == second)
        cout << "that's the same name twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';
}