#include <iostream>
using namespace std;
// Created By: Tyler Abbott
// 300137187
// March 6th, 2017
// Assignment 2: Question 1
//



// This function basically tears apart the number given by the user
// The function will check everytime it loops if one of the pieces broken off
// is the digit we are searching for.
// After the loop has completed, the digit has obviously not been found
// because the loop will break after the digit is found. So, it will return false
// Letting the user know the digit was not found.
//
bool containsDigit(int number, int digit){
	int newNumber;
	int add;
	 while(number!=0){
 	newNumber = number%10;
 	number = number/10;
 	add += newNumber;
 	if(digit==newNumber){
 		return true;
	 }
 }
 return false;
}

int main(){
	char x;
	
	// Do while will stop when the user enters anything other than 'y'
	do{
	int number, digit;
	cout << "Enter in a large number: " << endl;
	cin >> number;
	cout << "Enter in a digit to search for within the large number: " << endl;
	cin >> digit;
	
	bool var = containsDigit(number, digit);
	if(var == true){
		cout << "The number contains the digit!!" << endl << endl;
	} else{
		cout << "The number does NOT contain the digit!" << endl << endl;
	}
	
	cout << "Would you like to try again? (y/n)" << endl;
	cin >> x;
}while(x=='y');
}
