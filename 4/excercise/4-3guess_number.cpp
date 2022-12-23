/*
 * @Author: Steven G
 * @Date: 2022-12-23 08:31:46
 * @Last Modified by: Steven G
 * @Last Modified time: 2022-12-23 09:16:40
 */
// https://math.stackexchange.com/questions/512994/guessing-a-number-between-1-and-100-in-7-guesses-or-less
// The link above tells the basic l
#include "../../std_lib_facilities.h"
int find_num(int num, int low, int up);
int main()
{
    int num;
    int ans;
    char response;
    cout << "Enter a number: ";
    cin >> num;
    ans = find_num(num, 1, 100);
    cout << "Ha, the number you guessed is " << ans << '\n';
}

int find_num(int num, int low, int up)
{
    int half = 0;
    char resp;

    half = (up + low) / 2;
    cout << "Is the number you are thinking of less than " << half << " but greater than " << low << "?(y/n)\n";
    cin >> resp;
    if (num == half)
    {
        return half;
    }
    else if (resp == 'y')
    {
        return find_num(num, low, half); // note do not forget return in recursion otherwise there will be error
                                         // error: non-void function does not return a value in all control paths [-Werror,-Wreturn-type]
    }
    else
    {
        return find_num(num, half, up);
    }
}
