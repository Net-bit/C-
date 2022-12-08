#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{ 
	int Arr[3][4] = {{1, 2, 3, 5},{4, 4, 4, 4}, {6, 7, 8, 9}};
	int max=0;
	int ii;
	int jj;
	
	for(int i = 0; i < 3; ++i){
	for(int j = 0; j < 4; ++j)
	if(Arr[i][j] >max){
		max=Arr[i][j];
		ii=i;
		jj=j;
		}
	}
	cout<<max<<" Рядок: "<<ii<<" Стовпчик: "<<jj<<" *за умови рахування від нуля*";
}