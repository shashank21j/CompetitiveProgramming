
// UVA 12148
#include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
    vector <int> days_in_month{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
public:
    Date(int d = 0, int m = 0, int y = 0) {
        day = d;
        month = m - 1;
        year = y;
    }
    bool is_leap() {
        if (this->year % 400 == 0) return true;
        if (this->year % 100 == 0) return false;
        if (this->year % 4 == 0) return true;
        return false;
    }
    int days_month(int m) {
        if (this->is_leap() && this->month == 1) {
            return 29;
        }
        else {
            return days_in_month[month];
        }
    }
    Date next_day() {
        Date new_day;
        new_day.day = this->day + 1;
        new_day.month = this->month;
        new_day.year = this->year;
        if (new_day.day > days_month(new_day.month)) {
            new_day.day = 1;
            new_day.month += 1;
        }
        if (new_day.month == 12) {
            new_day.month = 0;
            new_day.year += 1;
        }
        return new_day;
    }
    bool is_equal(Date d) {
        if (this->day == d.day && this->month == d.month && this->year == d.year) {
            return true;
        }
        return false;
    }
    void print () {
        cout << day << endl;
    }

};

int main() {
    int t;
    cin >> t;
    int d, m, y, bill1, bill2;
    while (t != 0) {
        cin >> d >> m >> y >> bill1;
        Date day1(d, m, y);
        t--;
        int cnt = 0;
        int sum = 0;
        while(t--) {
            Date temp = day1.next_day();
            cin >> d >> m >> y >> bill2;
            Date day2(d, m, y);
            if (temp.is_equal(day2)) {
                cnt += 1;
                sum += bill2 - bill1;
            }
            day1 = day2;
            bill1 = bill2;
        }
        cout << cnt << " " << sum << endl;
        cin >> t;
    }
    return 0;
}
