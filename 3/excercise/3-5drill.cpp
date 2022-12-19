/*
 * @Author: Steven G
 * @Date: 2022-12-20 09:10:48
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 10:22:23
 */

// read and write a first name
#include "../../std_lib_facilities.h"
int main()
{
    cout << "Enter the name of the person you want to write to\n";
    cout << "Enter the name of your friend.\n";
    cout << "Enter the sex of your friend\n";
    cout << "Enter your friend's age\n";

    string first_name; // first_name is a variable of type string
    string friend_name;
    char friend_sex;
    signed int age;

    cin >> first_name >> friend_name >> friend_sex >> age; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "   "
         << "How are you? I am fine. I miss you."
         << "\n ";
    cout << "Have you seen " << friend_name << " lately?\n";

    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    if (age < 0 || age > 110)
    {
        simple_error("You are Kidding!\n");
    }
    else
    {
        cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    }
    return 0;
}