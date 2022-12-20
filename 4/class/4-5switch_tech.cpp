/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:02:51
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 11:02:51
 */

#include "../../std_lib_facilities.h"
int main() // you can switch only on integers, etc.
{
    cout << "Do you like fish?\n";
    string s;
    cin >> s;
    switch (s)
    { // error: the value must be of integer, char, or enum type
    case "no":
        // . . .
        break;
    case "yes":
        // . . .
        break;
    }
}