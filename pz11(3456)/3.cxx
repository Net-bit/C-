#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int Arr[10];
    for(int i = 0; i < 10; ++i) Arr[i] = i;
    for(int i = 0; i < 10; ++i){
        int j = rand()%(10-i)+i;
        int t = Arr[i]; Arr[i] = Arr[j]; Arr[j] = t;
    }
    
	int max = Arr[0];
	int min = Arr[0];
	
		for(int i = 0; i < 10; ++i){
		  	if(Arr[i] > max){
       		max = Arr[i];
    		}
    		if(Arr[i] < min){
    			min = Arr[i];
    		}
    	cout << Arr[i] <<"  ";
		}
	cout << "\n";
    cout << max << " " << min<<"\n";
	
	std::iter_swap(
		std::min_element(Arr, Arr + std::size(Arr)),
    	std::max_element(Arr, Arr + std::size(Arr)));
    	
	for(int i = 0; i < 10; ++i){
	 cout << Arr[i] <<"  ";
	 }
	 return 0;
}
