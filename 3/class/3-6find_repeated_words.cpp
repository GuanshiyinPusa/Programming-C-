/*
 * @Author: Steven G
 * @Date: 2022-12-19 22:19:56
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 22:20:25
 */

#include "../../std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previous = " "; // not a word
    string current;
    while (cin >> current)
    {
        ++number_of_words; // increase word count
        if (previous == current)
            cout << "word number " << number_of_words
                 << " repeated: " << current << '\n';
        previous = current;
    }
}