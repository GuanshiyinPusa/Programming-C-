/*
 * @Author: Steven G
 * @Date: 2022-12-29 22:00:18
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-29 22:11:29
 */

#include <iostream>
#include <vector>
// the code is from https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
using namespace std;

int main()
{
    cout << "what is the max you want? We will find all prime numbers between 1 to max: \n";
    int upperbound;
    cin >> upperbound;
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
    for (int x : flag) // for each x in v
        cout << x << '\n';
}