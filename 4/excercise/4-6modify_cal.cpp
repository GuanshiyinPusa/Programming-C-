/*
 * @Author: Steven G
 * @Date: 2022-12-28 08:32:55
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 08:55:38
 */

#include "../../std_lib_facilities.h"
#include <string>

void calculate(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        cout << num1 + num2 << '\n';
        break;
    case '-':
        cout << num1 - num2 << '\n';
        break;
    case '*':
        cout << num1 * num2 << '\n';
        break;
    case '/':
        cout << num1 / num2 << '\n';
        break;
    }
}

int str_digit_transfer(string spell_num)
{
    vector<string> s_num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num2;
    for (int i = 0; i < s_num.size(); i++)
    {
        if (spell_num == s_num[i]){
            // cout << "it is " << i << '\n';
            return i;
        }
    }
    num2 = stoi(spell_num);
    return num2;
}

int main()
{
    string input1, input2;
    int num1, num2;
    char op;
    cout << "please enter num1 operator num2 to calculate: \n";
    while (cin >> input1 >> op >> input2)
    {
        num1 = str_digit_transfer(input1);
        num2 = str_digit_transfer(input2);
        calculate(num1, num2, op);
    }
    return 0;
}