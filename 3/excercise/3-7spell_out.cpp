/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:35:33
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:36:13
 */

// This program reads in the spellout of 0,1,2,3,4 and output its number

#include "../../std_lib_facilities.h"

int main()
{
    string num;
    cout << "Please enter a number spelled out: ";
    cin >> num;
    if (!cin)
        error("Not a number I know");
    if (num == "zero")
        cout << "0\n";
    else if (num == "one")
        cout << "1\n";
    else if (num == "two")
        cout << "2\n";
    else if (num == "three")
        cout << "3\n";
    else if (num == "four")
        cout << "4\n";
    else
        cout << "stupid computor\n";
    return 0;
}