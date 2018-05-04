#include <iostream>
//
// Created by: Tyler Abbott
// 300137187
// February 1st, 2017
//
using namespace std;

int main(){
 int user;
 int mod = 10;
 int newUser;
 int add = 0;
 int total;
 cout << "Enter an integer: " << endl;
 cin >> user;
 cout << "Reverse: ";
 while(user!=0){
 	newUser = user%10;
 	user = user/10;
 	cout << newUser;
 	add += newUser;
 }
 cout << endl;
 cout << "Added separately: " << add;
 return 0;
}
