/*
 * @Author: Steven G
 * @Date: 2022-12-20 15:29:58
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 15:34:52
 */
#include "../../std_lib_facilities.h"
// read some temperatures into a vector
int main()
{
    vector<double> temps;           // temperatures declare vector to hold data
    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp);      // put temp into vector, store data
                                    // . . . do something . . .
}