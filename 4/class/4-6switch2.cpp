/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:11:14
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 11:11:14
 */

#include "../../std_lib_facilities.h"
// This is a better sample of switch
int main() // case labels must be constants
{
    // define alternatives:
    int y = 'y'; // this is going to cause trouble
    constexpr char n = 'n';
    constexpr char m = '?';
    cout << "Do you like fish?\n";
    char a;
    cin >> a;
    switch (a)
    {
    case n:
        // . . .
        break;
    case y: // error: variable in case label
        // . . .
        break;
    case m:
        // . . .
        break;
    case 'n': // error: duplicate case label (n’s value is ‘n’)
        // . . .
        break;
    default:
        // . . .
        break;
    }
}