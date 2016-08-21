#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 0;i<n;i++) {
        string s;
        cin>>s;
        int month = (s[0]-48)*10 + (s[1] - 48);
        int day = (s[2]-48) * 10 + (s[3] - 48);
        int year = (s[4]-48) *1000 + (s[5] - 48)*100 + (s[6] - 48) *10 + (s[7]-48);
        struct tm t = {0};
        t.tm_year = year;
        t.tm_mon = month - 1;
        t.tm_mday = day;
        t.tm_hour = 0;
        t.tm_min = 0;
        t.tm_sec = 0;
        time_t timeSinceEpoch = mktime(&t);
        time_t timet = timeSinceEpoch + 24LL*3600LL*280;
        struct tm* nowStruct = localtime(&timet);
        day = nowStruct->tm_mday;
        month = nowStruct->tm_mon + 1;
        year = nowStruct->tm_year;
        printf("%d %02d/%02d/%04d ",i+1,month,day,year);
        if (month == 1) {
            if (day >= 21) {
                cout<<"aquarius"<<endl;
            }
            else {
                cout<<"capricorn"<<endl;
            }
        }
        else if (month == 2) {
            if (day >= 20) {
                cout<<"pisces"<<endl;
            }
            else {
                cout<<"aquarius"<<endl;
            }
        }
        else if (month == 3) {
            if (day >= 21) {
                cout<<"aries"<<endl;
            }
            else {
                cout<<"pisces"<<endl;
            }
        }
        else if (month == 4) {
            if (day >= 21) {
                cout<<"taurus"<<endl;
            }
            else {
                cout<<"aries"<<endl;
            }
        }
        else if (month == 5) {
            if (day >= 22) {
                cout<<"gemini"<<endl;
            }
            else {
                cout<<"taurus"<<endl;
            }
        }
        else if (month == 6) {
            if (day >= 22) {
                cout<<"cancer"<<endl;
            }
            else {
                cout<<"gemini"<<endl;
            }
        }
        else if (month == 7) {
            if (day >= 23) {
                cout<<"leo"<<endl;
            }
            else {
                cout<<"cancer"<<endl;
            }
        }
        else if (month == 8) {
            if (day >= 22) {
                cout<<"virgo"<<endl;
            }
            else {
                cout<<"leo"<<endl;
            }
        }
        else if (month == 9) {
            if (day >= 24) {
                cout<<"libra"<<endl;
            }
            else {
                cout<<"virgo"<<endl;
            }
        }
        else if (month == 10) {
            if (day >= 24) {
                cout<<"scorpio"<<endl;
            }
            else {
                cout<<"libra"<<endl;
            }
        }
        else if (month == 11) {
            if (day >= 23) {
                cout<<"sagittarius"<<endl;
            }
            else {
                cout<<"scorpio"<<endl;
            }
        }
        else if (month == 12) {
            if (day >= 23) {
                cout<<"capricorn"<<endl;
            }
            else {
                cout<<"sagittarius"<<endl;
            }
        }
    }
    return 0;
}