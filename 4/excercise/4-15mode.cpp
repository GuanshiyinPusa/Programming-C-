/*
 * @Author: Steven G
 * @Date: 2023-01-10 15:21:54
 * @Last Modified by:   Steven G
 * @Last Modified time: 2023-01-10 15:21:54
 */

//I'd like to find the of mode the numbers
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> nums;
    map<int, int> freq;
    int input;
    int mode = -1;
    int max_count = 0;

    cout << "Enter a series of numbers, type -1 to end input:" << endl;
    while (cin >> input) {
        nums.push_back(input);
        freq[input]++;

        if (freq[input] > max_count) {
            max_count = freq[input];
            mode = input;
        }

    }
    if (nums.size() > 0) {
        cout << "Mode: " << mode << endl;
    } else {
        cout << "No input given" << endl;
    }
    return 0;
}
