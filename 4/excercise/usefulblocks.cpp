/*
 * @Author: Steven G
 * @Date: 2023-01-10 14:30:36
 * @Last Modified by: Steven G
 * @Last Modified time: 2023-01-10 14:36:51
 */
// This is an attempt that I write some useful block so I can use it later on.

#include "../../std_lib_facilities.h"

vector<int> read_vector()
{
    int num;
    vector<int> vec;
    while (cin >> num)
    {
        cout << "You entered: " << num << "\n";
        vec.push_back(num);
    }
    return vec;
}

void print_vector(vector<int> vec)
{
    for (auto &it : vec)
    {
        cout << it << " ";
    }
    cout << "\n";
}

// test
int main()
{
    vector<int> x = read_vector();
    print_vector(x);
}