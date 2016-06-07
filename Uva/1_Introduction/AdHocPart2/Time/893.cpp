#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int d,dd,mm,yyyy;
    cin>>d>>dd>>mm>>yyyy;
    while (d + dd + mm + yyyy > 0) {
        struct tm t = {0};
        t.tm_year = yyyy - 1900;
        t.tm_mon = mm-1;
        t.tm_mday = dd;
        t.tm_hour = 0;
        t.tm_min = 0;
        t.tm_sec = 0;
        time_t timeSinceEpoch = mktime(&t);
        time_t timet = timeSinceEpoch + 24LL*3600LL*d;
        struct tm* nowStruct = localtime(&timet);
        int year = nowStruct->tm_year + 1900;
        int month = nowStruct->tm_mon + 1;
        int day = nowStruct->tm_mday;
       cout<<day<<" "<<month<<" "<<year<<endl;
       cin>>d>>dd>>mm>>yyyy;
    }
    return 0;
}