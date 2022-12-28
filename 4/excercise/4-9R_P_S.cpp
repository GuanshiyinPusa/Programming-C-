/*
 * @Author: Steven G
 * @Date: 2022-12-28 20:27:26
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-28 20:30:01
 */

// playing “Rock, Paper, Scissors"
// use of rand() from Cplusplus.com

#include "../../std_lib_facilities.h"
#include <stdlib.h>
#include <time.h>
int check_input(string v)
{
    vector<string> value = {"rock", "paper", "scissors"};
    for (int i = 0; i < 3; i++)
    {
        if (v == value[i])
        {
            return i;
        }
    }
    exit(0);
}
void R_P_S(string v)
{

    int ai_num;
    int player_num = check_input(v);
    vector<string> value = {"rock", "paper", "scissors"};
    srand(time(NULL)); // intialize random time seed
    ai_num = rand() % 3;
    cout << "Ai: " << value[ai_num] << "\n";
    switch ((player_num - ai_num + 3) % 3)
    {
    case 0:
        cout << "Even\n";
        break;
    case 1:
        cout << "You win!\n";
        break;
    case 2:
        cout << "Ai win!\n";
        break;
    }
}

int main()
{
    string value1;
    cout << "Rock, Paper, Scissors: \n";
    cout << "You: ";
    cin >> value1;
    R_P_S(value1);
}