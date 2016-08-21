#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin>>n;
    while (1) {
        if (n == 0) break;
        cin>>k;
        int p1,p2;
        string m1,m2;
        vector <float> w(n);
        vector <float> l(n);
        for (int i = 0;i< (k*n*(n-1))/2; i++) {
            cin>>p1>>m1>>p2>>m2;
            if (m1 == "scissors" && m2 == "paper") {
                w[p1-1] += 1;
                l[p2-1] += 1;
            }
            else if (m2 == "scissors" && m1 == "paper") {
                w[p2-1] += 1;
                l[p1-1] += 1;
            }
            else if (m1 == "scissors" && m2 == "rock") {
                w[p2-1] += 1;
                l[p1-1] += 1;
            }
            else if (m2 == "scissors" && m1 == "rock") {
                w[p1-1] += 1;
                l[p2-1] += 1;
            }
            else if (m1 == "paper" && m2 == "rock") {
                w[p1-1] += 1;
                l[p2-1] += 1;
            }
            else if (m2 == "paper" && m1 == "rock") {
                w[p2-1] += 1;
                l[p1-1] += 1;
            }
        }

        for (int i = 0;i<n;i++) {
            float sum = w[i] + l[i];
            if (sum == 0) cout<<"-"<<endl;
            else printf("%.3f\n",w[i]/(sum));
        }
        cin>>n;
        if (n != 0) cout<<endl;
    }
    return 0;
}
