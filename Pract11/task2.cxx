#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	
	int Arr[10] = {-1,2,-3,-4,5,6,24,8,9,-10,};
	
	
	for( int i = 0; i < 10; i++ ){
	 if(Arr[i]<0 && i<7 ){
	 	
	 	Arr[i] = 0;
	 	}
	 cout << Arr[i] << " ";
	 }
	 
	 
	 return 0;
}
