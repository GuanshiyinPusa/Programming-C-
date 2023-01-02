/*
 * @Author: Steven G
 * @Date: 2023-01-01 17:44:27
 * @Last Modified by: Steven G
 * @Last Modified time: 2023-01-01 18:31:28
 */
#include "../../std_lib_facilities.h"
// the code is copied from 4-6drill.cpp
int main()
{
    int a;
    vector<int> array;

    while (cin >> a)
    {
        cout << "You entered: " << a << "\n";
        array.push_back(a);
        int number = array[0];
        int mode = number;
        int count = 1;
        int countMode = 1;

        for (int i = 1; i < array.size(); i++)
        {
            if (array[i] == number)
            { // count occurrences of the current number
                ++count;
            }
            else
            { // now this is a different number
                if (count > countMode)
                {
                    countMode = count; // mode is the biggest ocurrences
                    mode = number;
                }
                count = 1; // reset count for the new number
                number = array[i];
            }
        }

        cout << "mode : " << mode << endl;
    }
}