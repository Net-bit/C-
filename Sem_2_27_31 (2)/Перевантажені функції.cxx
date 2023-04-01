#include <iostream>
#include <ctime>
using namespace std;
    int main(void) {
        int dy;
        int mnth;
        int yr;
        time_t t = time(NULL);
        tm tl = *localtime(&t);
        cout<<"Enter year"<< endl;
        cin>>yr;
        cout<<"Enter month"<< endl;
        cin>>mnth;
        cout<<"Enter day"<< endl;
        cin>>dy;
        cout << tl.tm_year+1900 << "-" << tl.tm_mon+1 << "-" << tl.tm_mday << endl;
        
        cout << (tl.tm_year+1900 - yr)*365+ (tl.tm_mon+1 - mnth)*30 + tl.tm_mday << endl;
        return 0;
}