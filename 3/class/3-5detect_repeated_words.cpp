/*
 * @Author: Steven G
 * @Date: 2022-12-19 22:11:49
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-19 22:12:10
 */

#include "../../std_lib_facilities.h"

int main()
{
    string previous = " "; // previous word; initialized to “not a word”
    string current;        // current word
    while (cin >> current)
    {                            // read a stream of words
        if (previous == current) // check if the word is the same as last
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}