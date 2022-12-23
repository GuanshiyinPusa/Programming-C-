/*
 * @Author: Steven G
 * @Date: 2022-12-22 17:30:31
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-22 17:33:11
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
    cout << "Total distance: " << sum << '\n';
    cout << "Mean distance: " << sum / temps.size() << '\n';

    sort(temps); // sort temperatures
    cout << "The smallest distance: " << temps[0] << '\n';
    cout << "The largest distance: " << temps[temps.size() - 1] << '\n';
}