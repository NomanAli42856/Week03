#include<iostream>
using namespace std;
main()
{
system("cls");
string name; 
float matric;
float inter;
float ecat;
float mat_per;
float inter_per;
float ecat_per;
float agg_mat;
float agg_inter;
float agg_ecat;
float aggregate;

cout << " Enter your name > ";
cin >> name;
cout << " Enter your matrix marks > ";
cin >> matric;
cout << " Enter your inter marks > ";
cin >> inter;
cout << " Enter ECAT marks > ";
cin >> ecat;

mat_per=(matric/1100)*100;
inter_per=(inter/550)*100;
ecat_per=(ecat/400)*100;

agg_mat = (mat_per*10)/100;
agg_inter = (inter_per*40)/100;
agg_ecat = (ecat_per*50)/100;
aggregate = agg_mat + agg_inter + agg_ecat;

cout << " Aggregate = " << aggregate;

}