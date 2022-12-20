/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:12:10
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 11:12:46
 */

#include "../../std_lib_facilities.h"
// This is when we want the same action for a set of values in switch
int main() // you can label a statement with several case labels
{
    cout << "Please enter a digit\n";
    char a;
    cin >> a;
    switch (a)
    {
    case '0':
    case '2':
    case '4':
    case '6':
    case '8':
        cout << "is even\n";
        break;
    case '1':
    case '3':
    case '5':
    case '7':
    case '9':
        cout << "is odd\n";
        break;
    default:
        cout << "is not a digit\n";
        break;
    }
}