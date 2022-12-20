/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:14:40
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 11:15:00
 */
#include "../../std_lib_facilities.h"
// calculate and print a table of squares 0–99
int main()
{
    for (int i = 0; i < 100; ++i)
        cout << i << '\t' << square(i) << '\n';
}