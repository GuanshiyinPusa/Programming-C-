/*
 * @Author: Steven G
 * @Date: 2022-12-19 17:48:25
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 17:49:26
 */

// read and write a first name
#include "../../std_lib_facilities.h"
int main()
{
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Hello, " << first_name << "!\n";
}