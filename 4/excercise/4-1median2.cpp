/*
 * @Author: Steven G
 * @Date: 2022-12-22 16:55:15
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 17:00:42
 */

#include "../../std_lib_facilities.h"
// compute mean and median temperatures
int main()
{
    vector<double> temps;           // temperatures
    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp);      // put temp into vector
    // compute mean temperature:
    double sum = 0;
    for (int x : temps)
        sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    // compute median temperature:
    sort(temps); // sort temperatures
    if (temps.size() % 2 == 1)
    {
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }
    else
    {
        double even_median = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
        cout << "Median temperature: " << even_median << '\n';
    }
}