#include<iostream>
using namespace std;
main()
{
system("cls");
int kgs;
float pound_value = 1/0.45; 
float pound;

cout << " Enter the weight in kilograms > ";
cin >> kgs;

pound = kgs * pound_value;

cout << " Weight in pound = " << pound;

}