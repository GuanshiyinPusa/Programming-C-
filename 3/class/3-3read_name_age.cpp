/*
 * @Author: Steven G
 * @Date: 2022-12-19 17:50:23
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 17:50:49
 */

#include "../../std_lib_facilities.h"
// read name and age
int main()
{
    cout << "Please enter your first name and age\n";
    string first_name; // string variable
    int age;           // integer variable
    cin >> first_name; // read a string
    cin >> age;        // read an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}