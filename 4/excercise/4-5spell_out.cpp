/*
 * @Author: Steven G
 * @Date: 2022-12-23 15:33:17
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-23 17:49:05
 */

#include "../../std_lib_facilities.h"
#include <ctype.h> //for isdigit()
int main()
{
    vector<string> spell_num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string string_input;

    while (cin >> string_input)
    {
        for (int i = 0; i < spell_num.size(); i++)
        {
            if (string_input == spell_num[i])
                cout << i << '\n';
            else if (string_input == num[i])
                cout << spell_num[i] << '\n';
        }
    }
    return 0;
}
