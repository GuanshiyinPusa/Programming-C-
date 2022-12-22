/*
 * @Author: Steven G
 * @Date: 2022-12-20 15:25:04
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 15:25:45
 */

// The range-for-loop
#include "../../std_lib_facilities.h"

int main()
{
    vector<int> v = {5, 7, 9, 4, 6, 8};
    for (int x : v) // for each x in v
        cout << x << '\n';
}