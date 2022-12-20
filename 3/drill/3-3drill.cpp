/*
 * @Author: Steven G
 * @Date: 2022-12-20 09:05:35
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 09:11:38
 */

// read and write a first name
#include "../../std_lib_facilities.h"
int main()
{
    cout << "Enter the name of the person you want to write to\n";
    cout << "Enter the name of your friend.\n";
    string first_name; // first_name is a variable of type string
    string friend_name;
    cin >> first_name >> friend_name; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "   "
         << "How are you? I am fine. I miss you."
         << "\n ";
    cout << "Have you seen " << friend_name << " lately?";
    return 0;
}