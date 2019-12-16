/**
*@ File age.cpp
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
    int age;
}cout << "Enter your age: ";
cin >> age;
// Task display rights by age:
// 1) If you are under 18, you must go to school
if (age< 18)
{
    Cout << "You should be in school" << endl;
}
// 2) If your are over 18, you can vote
else if (age >=18 )
{
    cout << " You can vote"  << endl;
}
// 3) if your are over 21, you can buyalcohol
else if (age <=21 && age < 65) )
{
    cout << "You can buy alcohol" <<endl;
}
// 40 If you are over 65, you can
else
{
    cout << "you can retire" <<endl;
}




