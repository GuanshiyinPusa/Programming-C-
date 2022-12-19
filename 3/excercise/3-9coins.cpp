/*
 * @Author: Steven G
 * @Date: 2022-12-20 10:37:28
 * @Last Modified by:   Steven G
 * @Last Modified time: 2022-12-20 10:37:28
 */

// This program works out how many cents/dollars u have

#include "../../std_lib_facilities.h"

int main()
{
    int pen;
    int nic;
    int dim;
    int qua;
    int hal;

    int cent;
    double dollar;

    cout << "How many pennies do you have?\n"
         << "How many nickles do you have?\n"
         << "How many dimes do you have?\n"
         << "How many quarters do you have?\n"
         << "How many half dollars do you have?\n";

    cin >> pen >> nic >> dim >> qua >> hal;

    if (!cin)
        error("Not a int!\n");

    if (pen == 1)
        cout << "You have a penny";
    else
    {
        cout << "You have " << pen << " pennies";
    }
    cout << "\n";
    if (nic == 1)
        cout << "You have a nickle";
    else
    {
        cout << "You have " << nic << " nickles";
    }
    cout << "\n";
    if (dim == 1)
        cout << "You have a dime";
    else
    {
        cout << "You have " << dim << " dimes";
    }
    cout << "\n";
    if (qua == 1)
        cout << "You have a quarter";
    else
    {
        cout << "You have " << qua << " quarters";
    }
    cout << "\n";
    if (hal == 1)
        cout << "You have a half dollar";
    else
    {
        cout << "You have " << hal << " half dollars";
    }
    cout << "\n";
    // in cent
    cent = pen + 5 * nic + 10 * dim + 25 * qua + 50 * hal;
    dollar = cent / 100;
    cout << "The value of all of your coins is " << cent << " cents\n";
    cout << "The value of all of your coins is " << dollar << " dollars\n";
}