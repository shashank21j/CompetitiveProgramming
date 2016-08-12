#include <bits/stdc++.h>
using namespace std;

int main () {
    int s;
    long double p;
    while(1) {
        cin>>s>>p;
        if (s + p == 0) break;
        long long int root = (long long int)sqrt(p);
        if (root*root < p) root += 1;
        if (root % 2 == 0) root += 1;
        long long int delta = root*root - p;
        long long int baser, basec;
        baser = (s + 1)/2 + (root - 1)/2;
        basec = baser;
        if (delta == 0) {
            cout<<"Line = "<<baser<<", column = "<<basec<<"."<<endl;
        }
        else {
            if (delta - (root-1) > 0) {
                baser -= root - 1;
                delta -= root - 1;
            }
            else {
                baser -= delta;
                delta = 0;
            }
            if (delta - (root-1) > 0) {
                basec -= root - 1;
                delta -= root - 1;
            }
            else {
                basec -= delta;
                delta = 0;
            }
            if (delta - (root-1) > 0) {
                baser += root - 1;
                delta -= root - 1;
            }
            else {
                baser += delta;
                delta = 0;
            }
            if (delta - (root-1) > 0) {
                basec += root - 1;
                delta -= root - 1;
            }
            else {
                basec += delta;
                delta = 0;
            }
            cout<<"Line = "<<baser<<", column = "<<basec<<"."<<endl;
        }

    }
    return 0;
}