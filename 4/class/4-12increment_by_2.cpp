/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:17:32
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 11:17:32
 */

#include "../../std_lib_facilities.h"
// calculate and print a table of squares of even numbers in the [0:100) range
int main()
{
    for (int i = 0; i < 100; i += 2)
        cout << i << '\t' << square(i) << '\n';
}