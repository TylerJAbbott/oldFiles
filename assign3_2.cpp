#include <iostream>
using namespace std;
/*
* Created By: Tyler Abbott
* 300137187
* COMP 152
* Assignment 3
*/
// Needed another variable to pass and manipulate called length
// Length captures the proper length for the user.
int getInput(int data[], int capacity, int sentinel, int& length){
	int x;
	cout << "Type in '0' to stop" << endl;
		for(length=0; length<=capacity; length++){
			if(x==sentinel){
				return length;
			}else{
				cin >> x;
				data[length]=x;
			}
		}
	
};

void bubbleSort(int data[], int length){
	length = length-1;
	for(int j = 0; j<length; j++){
		for(int k=j+1; k<length; k++){
			int tmp;
			if(data[j]>data[k]){
				// Swapping
				tmp = data[j];
				data[j] = data[k];
				data[k] = tmp;
			}
		}
	}
};

void printArray(int data[], int length){
	cout << endl << "Array contents:" << endl;
	for(int v=0; v<length-1; v++){
		cout << data[v] << endl;
	}
};

int main(){
	int capacity = 11;
	int data[capacity];
	int sentinel = 0;
	int length;
	getInput(data,capacity,sentinel,length);
	// Prints once to show correct output
	printArray(data,length);
	// Sorts
	bubbleSort(data,length);
	// Prints twice to show correct output
	printArray(data,length);
}
