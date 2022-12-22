/*
 * @Author: Steven G
 * @Date: 2022-12-22 15:45:00
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 16:20:48
 */

#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    string cm = "cm";
    string m = "m";
    string in = "in";
    string ft = "ft";

    string unit;
    double a, b, c;
    vector<double> nums;
    while (cin >> a >> unit)
    {
        if (unit == cm)
        {
            b = a / 100;
        }
        if (unit == m)
        {
            b = a;
        }
        if (unit == in)
        {
            b = a * 2.54 / 100;
        }
        if (unit == ft)
        {
            b = a * 12 * 2.54 / 100;
        }
        nums.push_back(b);

        sort(nums);
        if (nums[0] == b)
        {
            cout << a << unit << " is the smallest so far \n";
        }
        if (nums[nums.size() - 1] == b)
        {
            cout << a << unit << " is the largest so far \n";
        }
    }
    return 0;
}