/*
 * @Author: Steven G
 * @Date: 2022-12-20 13:41:29
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 13:41:29
 */

#include "../../std_lib_facilities.h"
void print_square(int v)
{
    cout << v << '\t' << v * v << '\n';
}
int main()
{
    for (int i = 0; i < 100; ++i)
        print_square(i);
}