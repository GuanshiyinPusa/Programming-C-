/*
 * @Author: Steven G
 * @Date: 2022-12-28 13:10:03
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 13:44:42
 */
#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    int grain_num;
    cout << "How many squares for how many grains - put in the number of grains you want!\n";
    while (cin >> grain_num)
    {
        for (int i = 0; i <= 32; i++)
        {
            if (grain_num < pow(2, i))
            {
                cout << i << "\n";
                return 0;
            }
        }
    }
}

