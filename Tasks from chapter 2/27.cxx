#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
 
	double pi4 = 0.;
	long ni;
	
	cout << "Number of iterations? ";
	cin >> ni;
	
	for (int i = 1; i <= ni; i++){
		if (i % 2 != 0){
			pi4 += 1. / (2 * i - 1);
		}
		else{
			pi4 -= 1. / (2 * i - 1);
		}
	}
	
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;


	return 0;
}