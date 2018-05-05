#include <iostream>
using namespace std;
int main(){
	float n = 1000.0;
	for(int y = 0; y<=10; y++){
		n *= n;
		cout << n << "\t";
		// The program expresses the floating point number in scientific notation (until it's too large).
	}
	return 0;
}
