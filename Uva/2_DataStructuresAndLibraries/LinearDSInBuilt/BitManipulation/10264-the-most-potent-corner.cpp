#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    while (cin>>n) {
        int nc = pow(2,n);
        vector <int> edges(nc);
        vector <int> neighboursum(nc);
        for (int i = 0;i<nc;i++) {
            cin>>edges[i];
        }
        for (int i = 0;i<nc;i++) {
            int sum = 0;
            for (int j = 0;j<n;j++) {
                sum += edges[(i^(int)(pow(2,j)))];
            }
            neighboursum[i] = sum;
        }
        vector <int> max_neighbour(nc);
        for (int i = 0;i<nc;i++) {
            int maxi = -1;
            for (int j = 0;j<n;j++) {
                maxi = max(maxi,neighboursum[i] + neighboursum[(i^(int)(pow(2,j)))]);
            }
            max_neighbour[i] = maxi;
        }
        int maxc = -1;
        for (int i = 0;i<nc;i++) {
            if (max_neighbour[i]>maxc) {
                maxc = max_neighbour[i];
            }
        }
        cout<<maxc<<endl;
    }
    return 0;
}