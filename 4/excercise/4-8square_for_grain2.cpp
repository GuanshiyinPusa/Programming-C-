/*
 * @Author: Steven G
 * @Date: 2022-12-28 20:27:33
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-28 20:27:33
 */

#include "../../std_lib_facilities.h"
#include <cmath>

int main()
{
    int num_square;
    cout << "How many grains for how many squares - put in the number of squares you want!\n";
    while (cin >> num_square)
        cout << pow(2, num_square) - 1 << '\n';
}
