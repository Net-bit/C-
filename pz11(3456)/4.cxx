#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int a=0;
	int counter=0;
	int Arr[10];
    for(int i = 0; i < 10; ++i) Arr[i] = i;
    for(int i = 0; i < 10; ++i){
        int j = rand()%(10-i)+i;
        int t = Arr[i]; Arr[i] = Arr[j]; Arr[j] = t;
    }
    
    cin>>a;
    
    for(int i = 0; i < 10; ++i){
    	if(Arr[i]>a){
    			counter++;
    			cout << Arr[i]<<" ";
    		}
    }
    cout << "\n" <<counter;
	 return 0;
}
