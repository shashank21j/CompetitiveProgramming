#include <bits/stdc++.h>

using namespace std;

int main () {
    int N,B,H,W;
    while (cin>>N>>B>>H>>W) {
        int cost;
        int min_cost = INT_MAX;
        for (int ii = 0; ii < H;ii++) {
            vector <int> beds(W);
            cin>>cost;
            int max_bed = 0;
            for (int i = 0;i < W; i++) {
                cin>>beds[i];
                max_bed = max(max_bed, beds[i]);
            }
            if (max_bed >= N && cost*N <= B) {
                min_cost = min(min_cost, cost*N);
            }
        }
        if (min_cost <= B) cout<<min_cost<<endl;
        else cout<<"stay home"<<endl;
    }
    return 0;
}
