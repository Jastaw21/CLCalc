#include "Checker.h"
#include <iostream>
#include <string>
using namespace std;

bool Checker::Check_input(long double x, char oper, long double y, bool input_valid, char oper2, long double z)
{
    bool x_valid = false;
    bool y_valid = false;
    bool z_valid = false;
    bool oper_valid = false;    
    bool oper2_valid = false;
    bool return_value = false;
    string operators = "+-/%*^";
    x_valid = !isalpha(x);
    y_valid = !isalpha(y);
    z_valid = !isalpha(z);

    if (operators.find(oper) != string::npos)
    {
        oper_valid = true;
    }
    else {
        oper_valid = false;
    }

    if (operators.find(oper2) != string::npos)
    {
        oper2_valid = true;
    }
    else {
        oper2_valid = false;
    }

    if (oper2_valid && oper_valid && x_valid && y_valid && z_valid)
    {
        return_value = true;
    }
    else
    {
        return_value = false;
    }
    return return_value;
}
