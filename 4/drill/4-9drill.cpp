/*
 * @Author: Steven G
 * @Date: 2022-12-22 16:36:35
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 16:43:54
 */

#include "../../std_lib_facilities.h"

int main()
{
    vector<double> nums; // vector of numbers
    string unit;         // unit
    double b;
    for (double num; cin >> num >> unit;)
    {
        if (unit == "cm")
        {
            b = num / 100;
        }
        else if (unit == "m")
        {
            b = num;
        }
        else if (unit == "in")
        {
            b = num * 2.54 / 100;
        }
        else if (unit == "ft")
        {
            b = num * 12 * 2.54 / 100;
        }
        else
        {
            cout << "wrong input\n";
            break;
        }
        cout << "You entered: " << b << " in meters.\n";
        nums.push_back(b);
    }
    double sum = 0;
    for (int x : nums)
        sum += x;
    cout << "Average values: " << sum / nums.size() << '\n';

    sort(nums);
    cout << "Median values: " << nums[nums.size() / 2] << '\n';
    cout << "THe number of values:  " << nums.size() << '\n';
    cout << "The smallest values: " << nums[0] << '\n';
    cout << "The largest values: " << nums[nums.size() - 1] << '\n';
}