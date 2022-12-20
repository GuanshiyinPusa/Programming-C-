/*
 * @Author: Steven G
 * @Date: 2022-12-20 11:16:49
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 11:17:38
 */

#include "../../std_lib_facilities.h"
int main()
{
    for (int i = 0; i < 100; ++i)
    { // for i in the [0:100) range
        cout << i << '\t' << square(i) << '\n';
        ++i; // what's going on here? It smells like an error!
    }
}