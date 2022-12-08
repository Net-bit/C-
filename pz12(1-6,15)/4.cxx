#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][6] = {{1, 2, 3, 5, 6, 7},{4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 1, 2}, {1, 1, 1, 1, 1, 1}};
	int k = 0;
	
	for(int j = 0; j < 6; ++j){
		k = 0;
	for(int i = 0; i < 4; ++i){
	k=k+Arr[i][j];}
	cout << "Для " << j << "-го стовпчику сумма= " << k<<"\n";
	}
}
