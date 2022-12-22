/*
 * @Author: Steven G
 * @Date: 2022-12-20 15:28:29
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-20 15:29:33
 */

#include "../../std_lib_facilities.h"
int main()
{
    vector<double> v; // start off empty; that is, v has no elements
    // v: 0
    v.push_back(2.7); // add an element with the value 2.7 at end (“the back”) of v
                      // v now has one element and v[0]==2.7
    // v: 1 2.7
    v.push_back(5.6); // add an element with the value 5.6 at end of v
                      // v now has two elements and v[1]==5.6
    // v: 2 2.7 5.6
    v.push_back(7.9); // add an element with the value 7.9 at end of v
                      // v now has three elements and v[2]==7.9
                      // v: 3 2.7 5.6 7.9
    // dot notation == member-function-call: object_name.member-function-name ( argument-list )
}