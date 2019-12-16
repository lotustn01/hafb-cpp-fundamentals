/**
*@ File mysquare.cpp
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

cout <<"number   Square Root"  << endl;
cout <<"------   -----------"  << endl;
cout << 81 << sqrt(81) <<endl;
for (int count = 1; count < kMaxCount; ++count)
{
    cout << count << "  " << sqrt(count) <<endl;
}
count <<"Done" <<endl;


return 0;
}