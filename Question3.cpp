#include <iostream>
//
// Created by: Tyler Abbott
// 300137187
// January 30th, 2017
//
using namespace std;
int main()
{
    int x;
	int space;
	int rows;
	int f = 0;
	int l = 1;
    cout<<"Enter the number of rows you'd like:" << endl;
    cout << ">";
    cin>>rows;
    for(x=1; x<=rows; x++)
    {
        for(space = 1; space<=rows-x; space++)
        {
           cout<<" ";
        }
        for(; f!=x*2-1; f++)
        {
           cout << l;
        }
        f = 0;
        cout << endl;
         l++;
    }
return 0;
}
