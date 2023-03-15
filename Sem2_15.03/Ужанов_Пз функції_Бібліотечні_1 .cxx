 #include <iostream>
#include <ctime>
using namespace std;
struct Date {
    int year;
    int month;
    int day;
};
    
Date today(void);
bool isLeap(int year);
int monthLength(int year, int month);
int dateLength(Date date);

int main(void) {
    Date t = today();
    Date bday;
    cout << "Current date:";
    cout << t.year << "-" << t.month << "-" << t.day << endl;
    cout << "Enter your bday"<< endl;
    cout << "Enter year:";
    cin >> bday.year;
    cout << "Enter month:";
    cin >> bday.month;
    cout << "Enter day:";
    cin >> bday.day;
    
    cout << dateLength(t) - dateLength(bday);
    
    
    return 0;
    }
    
Date today() {
    Date todayDate;
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    todayDate.year=tl.tm_year+1900;
    todayDate.month=tl.tm_mon+1;
    todayDate.day=tl.tm_mday;
    return todayDate;
    }
bool isLeap(int year){
    bool result = false;
    if(year % 4 == 0)result=true;
    return result;
}
int monthLength(int year, int month) {
    int countOfDays;
    switch (month) {
    case 1: countOfDays= 31;break;
    case 2: if(isLeap(year)==true) countOfDays= 29;else countOfDays= 28; break;
    case 3: countOfDays= 31;break;
    case 4: countOfDays= 30;break;
    case 5: countOfDays= 31;break;
    case 6: countOfDays= 30;break;
    case 7: countOfDays= 31;break;
    case 8: countOfDays= 31;break;
    case 9: countOfDays= 30;break;
    case 10: countOfDays= 31;break;
    case 11: countOfDays= 30;break;
    case 12: countOfDays=31;break;
    }
    return countOfDays;
}

int dateLength(Date date){
    int sum=0;
    for(int i = 1;i < date.year;i++){ 
    if(isLeap(date.year)) sum+=366;else sum +=365;} 
    
    for(int i = 1;i < date.month;i++){ 
    sum += monthLength(date.year, i);}
    
    sum +=date.day;
    return sum;
}

