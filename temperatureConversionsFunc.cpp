#include <iostream>
#include <iomanip>

using namespace std;

double getTemp(double x);

double getInc(double y);

double processData(double &f, double &k, double &r, double &userTemp, double &userInc); 

void displayDta();

void displayTable();

int main()
{
	int userTemp, l, t, x, y, userInc, f, k, r, p, displayData, a, b, c;
	userTemp = getTemp(-273.15);
	userInc = getInc(1);
	double processData();
	processData(a, b, c);
}

double getTemp(double x){
	double userTemp;
	cout << "Enter a number above -273.15 : \n";
	cin >> userTemp;
while(userTemp<-273.15){
	cout << "OUT OF RANGE: TRY AGAIN \n";
	cin >> userTemp;
}
return userTemp;
}

double getInc(double y){
	double userInc;
	cout << "Enter a number above 1 :\n";
	cin >> userInc;
while(userInc<1){
	cout << "OUT OF RANGE: TRY AGAIN \n";
	cin >> userInc;
}


return userInc;

}

double processData(double &f, double &k, double &r, double &userTemp, &double userInc){
	int i = 0;
	f = a;
	k = b;
	r = c;
	userTemp = d;
	userInc = e;
	
	do{

	f = (((userTemp * 9) / 5) + 32);
	k = (userTemp + 273.15);
	r = (userTemp * 1.8);
	userTemp = userTemp + userInc;
	i++;
}
while (i<20);
}

