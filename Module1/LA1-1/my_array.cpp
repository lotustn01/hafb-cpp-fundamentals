/**
*@ File my_array.cpp
*@ Author your name (you@domain.com)
*@ Brief print user rights base on your age
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
    // To create
    //array<type,
    array<double, 5> grades {22.1, 6.9, 11.2, 99, 44.3};

    cout << "size of array: "  << grades.size()  << endl;
   for(int index = 0; index < grades.size(); ++index)
    { 
        cout << grades[index] << endl;
    }
    // for each loop
    cout << "For each: " << endl;
    for(auto grades : grades)

    {
           cout << grades << endl;
    }
    
        return 0;
}