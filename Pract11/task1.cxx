#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	const int x = 0;
	int y;
	
	int Arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout  << "Increases" << "\n";
	for( int i = 0; i < 12; i++ ){
	 cout << Arr[i] << " ";
	 }
	 
	 cout  << "\n";
	 
	 cout  << "Decreases" << "\n";
	 for( int i = 11; i >= 0; i-- ){
	 cout << Arr[i] << " ";
	 }
	 return 0;
}
