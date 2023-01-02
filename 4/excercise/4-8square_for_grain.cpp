/*
 * @Author: Steven G
 * @Date: 2022-12-28 20:31:30
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-28 20:31:30
 */

#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    int num_square;
    cout << "How many grains for how many squares - put in the number of squares you want!\n";
    while (cin >> num_square)
    {
        long long int num_grains = 0;
        for (int i = 0; i < num_square; i++)
        {
            num_grains += pow(2, i);
        }
        cout << num_grains << '\n';
    }
}
