#include <iostream>
#include <math.h>
using namespace std;
int main( )
{
	int matrix[10][10] = { };
	int count, countt;
	
	for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				 *(*(matrix + i)+j)= rand() % 10;
				 	if( *(*(matrix + i)+j) % 2 == 0)
				 	count++;
				 	else
				 	countt++;
			}
		}
	for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				 cout.width(4);
				 cout << matrix[i][j];
				 
			}
			cout <<'\n';
			
		}	
	cout <<"Парні "<<count<<'\n'<<"Непарні "<<countt<<'\n';
	return 0;
}
