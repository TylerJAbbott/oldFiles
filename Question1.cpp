#include <iostream>
#include <math.h>
//
// Created by: Tyler Abbott
// 300137187
// February 2nd, 2017
//
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter values:" << endl;
	cout << "a = ";
	cin >> a;
	cout << endl << "b = ";
	cin >> b;
	cout << endl << "c = ";
	cin >> c;
if(a==0&&b==0&&c==0){
	cout << "Solution is indeterminate!" << endl;
	return 0;
} else if(a==0&&b==0&&c!=0){
	cout << "There is no solution!" << endl;
	return 0;
}
else if(a==0&&b!=0&&c!=0){   // There are 3 boolean expressions that support errors and other outcomes.
							// However, it does not support the values a = 0, b = 1, and c = 0.
	int j = (-c/b);
	cout << "Equation is linear x = " << j;
	return 0;
}
int d = sqrt(b*b - 4*a*c);  // Variable d is equal to the result of the square root
int result1 = (-b + d)/(2*a);
int result2 = (-b - d)/(2*a);
if(d>0){
	cout << "Two real roots: " << endl;
	cout << " x = " << result1;
	cout << " and x = " << result2;
	return 0;
} else if(d==0){
	int k = -b/(2*a);
	cout << "Roots are loaded. x = " << k;
	return 0;
} else{
	cout << "No real solution";
	return 0;
}
return 0;
}
