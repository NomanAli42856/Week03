#include<iostream>
using namespace std;
main()
{
system("cls");
int roll_number;
float aggregate;
char section;
string name;

cout << " Enter your name >>";
cin >> name;
cout << " Enter your aggerate >>";
cin >> aggregate;
cout << " Enter your section >>";
cin >> section;
cout << " Enter your roll number >>";
cin >> roll_number;

cout << " Your name is " << name << endl;
cout << " Your roll number is " << roll_number << endl;
cout << " Your aggregate is " << aggregate << endl;
cout << " Your section is " << section;
}