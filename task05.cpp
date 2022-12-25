#include<iostream>
using namespace std;
main()
{
system("cls");
float charge; 
int time;
float current;

cout << " Enter the charge > ";
cin >> charge;
cout << " Enter the time in seconds > ";
cin >> time;

current = charge / time;

cout << " Current = " << current;

}