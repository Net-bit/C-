#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[4][7] = {{1, 2, 3, 5, 6, 6, 7},{4, 4, 4, 4, 4, 4, 4}, {6, 7, 8, 9, 3, 2, 5}, {9, 6, 8, 3, 3, 5, 0}};
	int min=9;
	int ii;
	int jj;
	
	for(int j = 0; j < 7; ++j){
	for(int i = 0; i < 4; ++i)
	if(Arr[i][j] <min){
		min=Arr[i][j];
		ii=i;
		jj=j;
		}
	}
	cout<<min<<" Рядок: "<<ii<<" Стовпчик: "<<jj<<" *за умови рахування від нуля*";
}
