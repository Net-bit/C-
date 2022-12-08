#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int ctr=0;
	int Arr[10];
    for(int i = 0; i < 10; ++i) Arr[i] = i-1;
    for(int i = 0; i < 10; ++i){
        int j = rand()%(10);
        int t = Arr[i]; Arr[i] = Arr[j]; Arr[j] = t;
    }
    
    for(int i = 0; i < 10; ++i){
	 cout << Arr[i] <<"  ";
	 }
    
    for(int i = 0; i < 10; ++i){
	 if(Arr[i]==0){
	 	ctr++;
	 	}
	 }
	 
	cout<<"\n";
	
    if(ctr==0){
    	cout<<"Нема нульовых елементів";
    }else{
    	cout<<"Є "<<ctr<<" нульо(вих/вий) елемент";}
    
	 return 0;
}
