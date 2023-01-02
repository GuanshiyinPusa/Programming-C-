/*
 * @Author: Steven G
 * @Date: 2022-12-28 20:36:17
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 21:07:50
 */

#include "../../std_lib_facilities.h"

bool find_prime(int i)
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
    int max;
    cout << "Find Prime between 1 to max, max: \n";
    cin >> max;
    vector<int> prime;
    cout << "0 is a composite number\n";
    cout << "1 is a composite number\n";
    for (int i = 2; i <= max; i++)
    {
        if (find_prime(i))
        {
            cout << i << " is a prime number\t";
            for (int m = 0; m < prime.size(); m++) // check prime
            {
                if (i % prime[m] == 0)
                {
                    cout << "??\n";
                }
            }
            cout << i << " check!\n";
            prime.push_back(i);
        }
        else
        {
            cout << i << " is a composite number\n";
        }
    }
    for (int x : prime) // print vector prime
        cout << x << ',';
    cout << "\n";
}