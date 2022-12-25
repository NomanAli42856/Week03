#include<iostream>
using namespace std;
main()
{
system("cls");
float acceleration;
float force;
float mass;
cout << " Enter acceleration > ";
cin >> acceleration;
cout << " Enter force ";
cin >> force;

mass = force / acceleration;

cout << " Mass= " << mass;

}