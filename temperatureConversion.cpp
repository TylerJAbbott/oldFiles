#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double n, f, k, r, x;
	int i = 0;
	cout << "Enter a number above -273.15 celsius \n";
	cin >> n;
	while((n<-273.15)||(n>100)){
	cout << "ERROR: You may not go below absolute zero or above 100 \n ";
	cin >> n;
}

cout << "What increments would you like?\n";
cin >> x;
while(x<1){
cout << "ERROR: You may not enter any value below 1\n";
cin >> x;}

// REMEMBER: The formulas need to be inside the do command in order to have n++ //
cout << left << setw(10) << "Celsius ";
cout << left << setw(10) << "Fahrenheit ";
cout << left << setw(10) << "Kelvin ";
cout << left << setw(10) << "Rankine \n";


do 
{
	f = (((n * 9) / 5) + 32);
	k = (n+273.15);
	r = (k * 1.8);
// setw is the width of the table, while the left command shuffles the table left //
cout << left << setw(10) << n;
cout << left << setw(10) << f;
cout << left << setw(10) << k;
cout << left << setw(10) << r;
cout << "\n";
i++;
// ****** THIS IS WHERE THE PROBLEM WENT WRONG DURING LAB4 ****** // 
n = n + x;
}
while (i<20);

system("PAUSE");
}
