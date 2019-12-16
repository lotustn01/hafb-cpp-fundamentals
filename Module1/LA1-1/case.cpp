/**
*@ File case.cpp
*@ Author your name (you@domain.com)
*@ Brief multiple IF-Statement
*@ Version 0.1
*2 Date: 2019-12-16
*
*@ Copyright copyright (c) 2019
*
*/

#include <iostream>
using namespace std;

int main()
{
 char code; 
cout << "Enter the specification code: ";
cin >> code;

// == operator to compare values
// when comparing characters use single ticks '  '
// if(code == 's')
// {
//     cout << "The item is space exploration grade." << endl;
}

// Use a switch statement
switch (code)
{
    case 's':  //like an IF statement
    cout << "The item is space exploration grade. " <<endl;
    break;

    default:  //like an ELSE statement
    cout << "The item not supported." << endl;
    break;

    case 'm':  
    cout << "The item is military grade. " <<endl;
    break;

    case 'T':  //like an IF statement
    cout << "The item is TOY grade. " <<endl;
    break;
}
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}

return 0;
}