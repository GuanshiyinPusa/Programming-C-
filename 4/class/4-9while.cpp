/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:13:56
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 11:15:14
 */

#include "../../std_lib_facilities.h"
#include <cmath>
// calculate and print a table of squares 0–99
int main()
{
    int i = 0; // start from 0
    while (i < 100)
    {
        cout << i << '\t' << square(i) << '\n';
        ++i; // increment i (that is, i becomes i+1)
    }
}