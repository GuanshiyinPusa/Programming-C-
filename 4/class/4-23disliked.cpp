/*
 * @Author: Steven G
 * @Date: 2022-12-21 09:03:11
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-21 09:06:25
 */

#include "../../std_lib_facilities.h"
// simple dictionary: list of sorted words
int main()
{
    string disliked = "Broccoli";
    for (string temp; cin >> temp;)
    {
        if (temp == disliked)
        {
            cout << '\a';
        }
    }
}