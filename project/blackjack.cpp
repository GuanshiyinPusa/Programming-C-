/*
 * @Author: Steven G
 * @Date: 2022-12-28 11:47:22
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 11:49:46
 */
#include "../std_lib_facilities.h"
#include <ctime>
#include <cstdlib>

int random_gen()
{
    srand(time(0));
    int randnum = (rand() % 10) + 1;
    return randnum;
}
int main()
{
    char resp;
    cout << "Do you want to play the game? \n";
    cin >> resp;
    if (resp == 'y')
    {

    }
    else
        cout << "fuck off\n";
    return 0;
}