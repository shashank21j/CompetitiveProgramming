#include <bits/stdc++.h>
using namespace std;

long long int inti(char a, char b) {
    return (a-48ll)*10ll + b-48ll;
}
int main () {
    string s;
    while(cin>>s) {
        long long int hh = inti(s[0], s[1]);
        long long int mm = inti(s[2], s[3]);
        long long int ss = inti(s[4], s[5]);
        long long int cc = inti(s[6], s[7]);
        long double tt1 = (hh*3600ll + mm*60ll + ss)*100ll + cc;
        tt1 *= 125ll;
        tt1 /= 108ll;
        long long int tt = (int)round(tt1);
        long long int h = tt/1000000;
        cout<<h;
        tt %= 1000000;
        int m = tt/10000;
        cout<<(m<10?"0":"")<<m;
        tt %= 10000;
        int s1 = tt/100;
        cout<<(s1<10?"0":"")<<s1;
        tt %= 100;
        cout<<(tt<10?"0":"")<<tt<<endl;
    }
    return 0;
}
