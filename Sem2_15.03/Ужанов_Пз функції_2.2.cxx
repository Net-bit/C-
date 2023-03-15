#include <iostream>
using namespace std;
bool isLeap(int year);
int monthLength(int year, int month);
int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
    for(int mo = 1; mo <= 12; mo++)
        cout << monthLength(yr,mo) << " ";
        cout << endl;
    }   
    return 0;
}
bool isLeap(int year){
    bool result = false;
    if(year % 4 == 0)result=true;
    return result;
}
int monthLength(int year, int month) {
    int countOfDays[12];
   for(int i=0;i<12;i++) {
   if(i==1 || i==3|| i==5|| i==7|| i==8|| i==10|| i==12)countOfDays[i]=31;
   if(i==2)countOfDays[i]=28;
   else countOfDays[i]=30;
   }
    return countOfDays;
}