#include <bits/stdc++.h>
using namespace std;

bool is_leap(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    if (y % 4 == 0) return true;
    return false;
}
int main (){
    int t;
    cin>>t;
    map <string, int> month_to_i{{"January", 0},{"February", 1},
    {"March", 2}, {"April", 3}, {"May", 4}, {"June", 5}, {"July", 6},
    {"August", 7}, {"September", 8}, {"October", 9}, {"November", 10},
    {"December", 11}};

    int idx = 0;
    while(t--) {
        cout<<"Case "<<++idx<<": ";
        string month1;
        string month2;
        char c;

        int day1;
        int day2;
        int year1;
        int year2;
        cin >> month1 >> day1 >> c >> year1;
        cin >> month2 >> day2 >> c >> year2;
        int m1 = month_to_i[month1];
        int m2 = month_to_i[month2];
        int t1 = day1 + m1 * 30;
        int t2 = day2 + m2 * 30;
        int leaps = 0;
        if (year1 == year2) {
            if (is_leap(year1) && t1 < 60 && t2 > 58) {
                leaps += 1;
            }
        }
        if (year1 < year2) {
            if (is_leap(year1) && t1 < 60) {
                leaps += 1;
            }
            if (is_leap(year2) && t2 > 58) {
                leaps += 1;
            }
        }

        year1 += 1;
        year2 -= 1;
        while (year1 <= year2 && (year1 + 1) % 400 != 0) {
            if (is_leap(year1)) {
                leaps += 1;
            }
            year1 += 1;
        }

        while (year2 > year1 && (year2 - 1) % 400 != 0) {
            if (is_leap(year2)) {
                leaps += 1;
            }
            year2 -= 1;
        }
        if (year2 - year1 - 2 == 0) {
            leaps += 1;
        }
        if (year2 - year1 - 2>= 400){
            leaps += ((year2 - year1 - 2)/400)*97;
            leaps += 1;
        }
        cout<<leaps<<endl;
    }
    return 0;
}
