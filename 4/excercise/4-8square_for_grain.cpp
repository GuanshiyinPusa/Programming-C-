/*
 * @Author: mikey.zhaopeng
 * @Date: 2022-12-28 19:39:10
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2022-12-28 19:45:39
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
