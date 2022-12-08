#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[5][7] = {{1, 2, 3, 4, 5, 6, 7},{4, 4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 9, 9, 2}, {9, 6, 8, 3, 4, 5, 7}, {1, 1, 1, 1, 1, 1, 1}};
	int k = 0;
	
	for(int i = 0; i < 5; ++i){
		k = 0;
	for(int j = 0; j < 7; ++j){
	k=k+Arr[i][j];}
	cout << "Для " << i << "-го рядку сумма= " << k<<"\n";
	
	}
}