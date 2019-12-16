#include <iostream>
using namespace std;

int main()
{
//calculate BMI: weight (kg)/[height (m)]^2
//Floating point variables: float, double
float weight=0, height=0, bmi=0;
cout<<"Welcome to the BMI program" <<endl;
cout << "enter your weight in kg:" << endl;
cin >> weight;
cout <<"enter your height in meters:"<<endl;
cin>> height;
//calculate BMI
bmi= weight/(height * height);
cout << "Your BMI is: " <<bmi <<endl;
return 0;
}