#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
	int sum=Arr[1][1];
	
	for(int i = 0; i < 3; ++i){
	for(int j = 0; j < 3; ++j)
	if(i%2==0 &&  j%2==0){
		sum=sum+Arr[i][j];
		}
	
	}
	cout<<sum;
}
