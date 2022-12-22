/*
 * @Author: Steven G
 * @Date: 2022-12-20 15:23:13
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 15:24:37
 */
// This progrma traverse a vector

#include "../../std_lib_facilities.h"
int main()
{
    vector<int> v = {5, 7, 9, 4, 6, 8};
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << '\n';
}