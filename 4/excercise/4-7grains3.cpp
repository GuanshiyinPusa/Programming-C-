/*
 * @Author: Steven G
 * @Date: 2022-12-28 13:10:03
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 13:39:08
 */
#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    int grain_num;
    int grain_on_square;
    cout << "How many squares for how many grains - put in the number of grains you want!\n";
    while (cin >> grain_num)
    {
        int sum = 0;
        for (int i = 0; i < grain_num; i++)
        {
            grain_on_square = pow(2, i);
            sum += grain_on_square;
            if (sum >= grain_num)
            {
                cout << grain_num << '\t' << sum << '\t' << i + 1 << '\n';
                break;
            }
        }
    }
}