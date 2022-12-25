#include<iostream>
using namespace std;
main()
{
system("cls");
int MB;
float bit;

cout << " Enter the data in MB > ";
cin >> MB;

bit = MB * 1024*1024*8;

cout << " Data in bits = " << bit;

}