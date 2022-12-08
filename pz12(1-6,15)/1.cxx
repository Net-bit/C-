#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][3] = {{1, 2, 3},{4, 4, 4}, {6, 7, 8}, {9, 6, 8}};
	int k = 0;
	
	for(int i = 0; i < 4; ++i){
		k = 0;
	for(int j = 0; j < 3; ++j)
	if(Arr[i][j] % 2==0){
		k++;
		}
	cout << "Для " << i << "-го рядку k= " << 	k<<"\n";
	}
}