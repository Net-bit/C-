#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int x;
	int a1;
	int a2;
	int a3;
	int answ=1;
	cout<<"Enter your number(1-999): ";
	cin>>x;
	while(x>0){
	 	a1 = x / 100;
	 	a2 = ((x/100)*10 - x/10)*-1;
	 	a3 =x %10;
	 	
	 cout << a1<<"  ";	
	 cout << a2<<"  ";
	 cout << a3<<"  "<<"\n";
	 
	 if(a1%2 != 0) answ =a1;
	 if(a2%2 != 0) answ =a2*answ;
	 if(a3%2 != 0) answ =a3*answ;
	 
	 cout<<"Answer is: ";
	 cout<<answ;
	 x=-1;
	 };
	 return 0;
}
