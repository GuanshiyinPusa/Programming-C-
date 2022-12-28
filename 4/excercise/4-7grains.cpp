/*
 * @Author: Steven G
 * @Date: 2022-12-28 13:10:03
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 13:23:09
 */
#include "../../std_lib_facilities.h"
#include <cmath>

int main(){
    int grain_num;
    int grain_on_square;
    int sum = 0;
    cout << "How many squares for how many grains - put in the number of grains you want!\n";
    cin >> grain_num;
    for(int i = 0; i < grain_num; i++){
        grain_on_square = pow(2,i);
        sum += grain_on_square;
        if(sum >= grain_num){
            cout << i+1 << '\n';
            return 0;
        }
    }
}