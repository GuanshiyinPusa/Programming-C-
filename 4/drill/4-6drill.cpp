/*
 * @Author: Steven G
 * @Date: 2022-12-22 15:34:19
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 15:44:48
 */

#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    double a, b, c;
    vector<double> nums;
    while (cin >> a)
    {
        cout << "You entered: " << a << "\n";
        nums.push_back(a);
        sort(nums);
        if (nums[0] == a)
        {
            cout << a << " is the smallest so far \n";
        }
        if (nums[nums.size() - 1] == a)
        {
            cout << a << " is the largest so far \n";
        }
    }
    return 0;
}