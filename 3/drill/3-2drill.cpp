/*
 * @Author: Steven G
 * @Date: 2022-12-19 23:07:33
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 23:08:51
 */

// read and write a first name
#include "../../std_lib_facilities.h"
int main()
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "   "
         << "How are you? I am fine. I miss you." << "\n ";
}