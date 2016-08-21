#include <bits/stdc++.h>
using namespace std;
int main() {
    float Arr[12][12];
    int col;
    cin>>col;
    char flag;
    cin>>flag;
    float sum = 0;
    cout<<fixed<<setprecision(1);
    for (int i=0;i<12;i++) {
        for (int j=0;j<12;j++) {
            cin>>Arr[i][j];
            if (j == col) sum+= Arr[i][j];
        }
    }
    if (flag == 'S') cout<<sum<<endl;
    else cout<<sum/12<<endl;
    return 0;
}