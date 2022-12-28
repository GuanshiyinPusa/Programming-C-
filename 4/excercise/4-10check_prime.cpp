/*
 * @Author: Steven G
 * @Date: 2022-12-28 15:59:05
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-28 15:59:05
 */
#include "../../std_lib_facilities.h"

bool check_prime(int i)
{
    for (int k = 2; k < i; k++)
    {
        if (i % k == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << "0 is a composite number\n";
    cout << "1 is a composite number\n";
    for (int i = 2; i < 101; i++)
    {
        if (check_prime(i))
            cout << i << " is a prime number\n";
        else
            cout << i << " is a composite number\n";
    }
}