#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
 
	int pow;
	unsigned long long res = 2;
	
	cout << "Enter a power: ";
	cin >> pow;
	
	if (pow > 1){
		for (int i = 2; i <= pow; i++){
			res *= 2;
		}
		cout << "2 in power" << pow << " = " << res;
	}
	else{
		cout << "Invalid power";
	}
	

	return 0;
}