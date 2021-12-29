// CLCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include "Checker.h"
using namespace std;




int calc_runner()
{
    long double x = 0.0;
    long double y = 0.0;
    long double result = 0.0;
    char oper = '+';
    char oper2 = '+';
    long double z = 0.0;  
    bool input_valid = false;
    bool proceed = false;
    Calculator c;
    Checker ch;
    while (true)
    {
        cin >> x >> oper >> y;
        input_valid = cin.good();
        if (input_valid)
        {
            proceed = ch.Check_input(x, oper, y, input_valid, oper2, z);

            if (proceed)
            {

                if (oper == '/' && y == 0)
                {
                    cout << "Can't divide by zero obvs" << endl;
                    continue;
                }

                else
                {
                    result = c.Calculate(x, oper, y, oper2, z);
                    cout << "Result is: " << result << endl;
                }
            }
            else
            {
                cout << "invalid input" << endl;
                cin.clear();
                cin.ignore(20, '\n');

            }
        }
        else
        {
            cout << "invalid input" << endl;
            cin.clear();
            cin.ignore(20, '\n');

        }
    }
    return 0;

}

int main()
{

    cout << "Calculator App\n";
    cout << "What do you want to calculate?" << endl;
    cout << "Enter in format of A*B, A+B, A-C, A/C" << endl;

    calc_runner();
}

