#include <iostream>
using namespace std;
int main(){
	double inch;
	cout << "Enter in the number of inches you would like to convert to centimeters." << endl;
	cout << ">";
	cin >> inch;
	double centimeter = 2.54 * inch;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << endl << "\t" << "inches" << "\t" << "centimeters" << endl;
	cout << "\t" << inch << "\t" << centimeter << endl;
	return 0;
}
