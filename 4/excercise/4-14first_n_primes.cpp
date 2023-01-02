/*
 * @Author: Steven G
 * @Date: 2022-12-31 08:43:37
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-31 09:01:52
 */

#include <iostream>
#include <vector>
#include <math.h>

// the code is from https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
using namespace std;

int main()
{
    cout << "input n, give you first n primes \n";
    int n;
    int count = 0;
    cin >> n;
    int upperbound = n / log(n) * 10;
    std::vector<bool> flag(upperbound + 1, true);
    flag[0] = flag[1] = false; // exclude 0 and 1
    for (int i = 2; i * i <= upperbound; ++i)
    {
        if (flag[i])
        {
            for (int j = i * i; j <= upperbound; j += i)
                flag[j] = false;
        }
    }
    for (int j = 0; j < flag.size(); j++)
    {
        if (count == n)
        {
            return 0;
        }
        else if (flag[j] == true)
        {
            count++;
            //cout << "count:" << count << "\t";
            cout << j << "\t";
        }
    }
}