#include <iostream>
//
// Created by: Tyler Abbott
// 300137187
// January 30th, 2017
//
using namespace std;
int main()
{
	int space;
	int rows;
    cout<<"Enter the number of rows you'd like:" << endl;
    cout << ">";
    cin>>rows;
   for(int x=1; x<=rows; x++){
   	for(int space=0; space<rows-x; space++){
   		cout << " ";
	   }
	for(int y = 1; y<=x; y++)
	   {
	   	cout  << y;
	   }
	for(int y=x; y>1; y--)
	   {
	   	int h = y-1;
	   	cout << h;
	   }
	   cout << endl;
   }
return 0;
}

