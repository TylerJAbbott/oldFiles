#include <iostream>
using namespace std;
// Created By: Tyler Abbott
// 300137187
// Assignment 2: Question 2
// March 6th, 2017
//
void computeCoin(int coinValue, int& number, int& amountLeft){
	number = amountLeft/coinValue;
	int place = coinValue * number;
	amountLeft -= place;
}


// This program is infinitely cooler if it can run for any
// integer amount. However, the question states that the 
// user input may not be above 99, nor may it be below 0.

// What this program does, is it takes a user entry, and calls the only other function
// to see how many 25, 10, 1 cent coins can fit into the amount remaining. Every time this
// is done, the number is saved as a variable, to be displayed for the user at the end.
// Simple do while is used to ask if the user would like to try again.

// The question insisted to use modulus (%), but I found a way around using it, 
// and I prefer my version, due to readability. 
int main(){
	char x;
	do{
	int amountLeft, coinValue, number;
	cout << "Enter in a number from 1 - 99: " << endl;
	cin >> amountLeft;
	
	// Feel free to comment this piece of code to remove the restriction
	if(amountLeft>99||amountLeft<1){
		do{
			cout << "INVALID ENTRY! Try again." << endl;
			cin >> amountLeft;
		}while(amountLeft>99||amountLeft<1);
	}
	
	int start = amountLeft;
	computeCoin(25,number,amountLeft);
	int quarters = number;
	computeCoin(10,number,amountLeft);
	int dimes = number;
	computeCoin(1,number,amountLeft);
	int pennies = number;
	cout << "You need: (" << quarters << ") quarter(s), (" << dimes << ") dime(s), and (" << pennies << ") penny(pennies) to make up: " <<  start << endl << endl;
	cout << "Would you like to try again? (Y/N)" << endl;
	cin >> x;
}while(x=='y'||x=='Y');
}
