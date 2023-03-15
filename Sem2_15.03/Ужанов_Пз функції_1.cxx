#include <iostream>
using namespace std;

bool isLeap(int year);
	
int main(void) {
	for (int yr = 1995; yr < 2024; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;

}

bool isLeap(int year){
    bool result = false;
    if(year % 4 == 0)result=true;
    return result;
}