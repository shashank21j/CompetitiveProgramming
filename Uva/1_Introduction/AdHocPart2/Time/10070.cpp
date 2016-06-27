#include <bits/stdc++.h>

using namespace std;

int make_int(string d) {
    int n = 0;
    for (int i = 0;i<d.length();i++) {
        n = n*10 + d[i] - 48;
    }
    return n;
}

int sum_string(string s) {
    int sum = 0;
    for (int i = 0;i<s.length();i++) {
        sum += (s[i] - 48);
    }
    return sum;
}

bool check_mod4(string s) {
    if (s.length() < 6) {
        int n = make_int(s);
        return (n % 4 == 0);
    }
    else {
        int n = (s[s.length() - 2]-48)*10 + (s[s.length() - 1] - 48);
        return (n%4 == 0);
    }
}

bool check_mod100(string s) {
    if (s.length() < 6) {
        int n = make_int(s);
        return (n %100 == 0);
    }
    else {
        int n = 0;
        for (int i = s.length() - 3;i <  s.length();i++) {
            n = n*10 + (s[i] - 48);
        }
        return (n%100 == 0);
    }
}

bool check_mod400 (string s) {
    if (s.length() < 6) {
        int n = make_int(s);
        return (n % 400 == 0);
    }
    else {
        int n = 0;
        for (int i = s.length() - 4;i <  s.length();i++) {
            n = n * 10 + (s[i] - 48);
        }
        return (n % 400 == 0);
    }
}

bool check_mod15 (string s) {
    if (sum_string(s) % 3 == 0 && (s[s.length() - 1] - 48)%5 == 0) return true;
    else return false;
}

bool check_mod55(string s) {
    int odd = 0;
    int even = 0;
    for (int i = 0;i<s.length();i+=2) {
        even += (s[i] - 48);
    }
    for (int i = 1;i< s.length();i+=2) {
        odd += (s[i] - 48);
    }
    if (abs(odd - even) % 11 == 0 && (s[s.length() - 1] - 48)%5 == 0 ) return true;
    else return false;
}

int main () {
    string n;
    cin>>n;
    while (1) {
        bool flag = false;
        bool mod4 = check_mod4(n);
        // cout<<mod4<<endl;
        bool mod55 = check_mod55(n);
        // cout<<mod55<<endl;
        bool mod15 = check_mod15(n);
        // cout<<mod15<<endl;
        bool mod400 = check_mod400(n);
        // cout<<mod400<<endl;
        bool mod100 = check_mod100(n);
        // cout<<mod100<<endl;
        bool leap = (mod400 || mod4 && !mod100);
        if (leap) {
            cout<<"This is leap year."<<endl;
            flag = true;
        }
        if (mod15) {
            cout<<"This is huluculu festival year."<<endl;
            flag = true;
        }
        if (leap && mod55) {
            cout<<"This is bulukulu festival year."<<endl;
            flag = true;
        }
        if (!flag) {
            cout<<"This is an ordinary year."<<endl;
        }
        if (cin>>n) {
            cout<<endl;
        }
        else {
            break;
        }
    }
    return 0;
}
