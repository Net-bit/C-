#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int max=0;
	int submax=0;
	int Arr[10];
    for(int i = 0; i < 10; ++i) Arr[i] = i;
    for(int i = 0; i < 10; ++i){
        int j = rand()%(10-i)+i;
        int t = Arr[i]; Arr[i] = Arr[j]; Arr[j] = t;
    }
    
    for(int i = 0; i < 10; ++i){
		  	if(Arr[i] > max){
		  	 submax=max;
       		max = Arr[i];
       		
    		}
    }
    cout<<max <<" "<<submax;
    
	 return 0;
}
