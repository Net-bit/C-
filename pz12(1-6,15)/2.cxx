#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[6][4] = {{1, 2, 3, 5},{4, 4, 4, 4}, {6, 7, 8, 9}, {9, 6, 8, 3}, {6, 7, 8, 2}, {9, 6, 8, 4}};
	int k = 0;
	
	for(int j = 0; j < 4; ++j){
		k = 0;
	for(int i = 0; i < 6; ++i)
	if(Arr[i][j] % 2==0){
		k++;
		}
	cout << "Для " << j << "-го стовпчику k= " << 	k<<"\n";
	}
}
