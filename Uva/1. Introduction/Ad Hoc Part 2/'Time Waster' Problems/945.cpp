#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    bool flag = false;
    while(scanf("%d",&n)!= EOF) {
        if (flag == true) cout<<endl;
        else flag = true;
        vector <int> capacity(n);
        int total_capacity = 0;
        int cargo_weight = 0;
        for (int i = 0;i<n;i++) {
            cin>>capacity[i];
            total_capacity += capacity[i];
        }
        vector <int> items(n,0);
        vector <vector<int> > ship(n);
        getchar();
        int p;
        cin>>p;
        int wt;
        vector<int> wts;
        int total_cargo = 0;

        for (int i = 0;i<p;i++) {
            cin>>wt;
            wts.push_back(wt);
            total_cargo += wt;
        }
        for (auto wt:wts) {
            int kmin = 0;
            vector <int> possible_cargo;
            for (int i = 0;i<n;i++) {
                if (items[i] < items[kmin]) {
                    kmin = i;
                    possible_cargo.clear();
                    possible_cargo.push_back(i);
                }
                else if (items[i] == items[kmin]) {
                    possible_cargo.push_back(i);
                }
            }
            // for (auto i:possible_cargo) {
            //     cout<<i<<" ";
            // }
            // cout<<endl;

            vector <int> possible_cargo2;
            kmin = 0;
            for (auto i:possible_cargo) {
                if (capacity[i] > kmin) {
                    kmin = capacity[i];
                    possible_cargo2.clear();
                    possible_cargo2.push_back(i);
                }
                else if (capacity[i] == kmin) {
                    possible_cargo2.push_back(i);
                }
            }
            // for (auto i: possible_cargo2) {
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            int selected = possible_cargo2[0];
            if (wt > capacity[selected]) {
                break;
            }
            ship[selected].push_back(wt);
            cargo_weight += wt;
            capacity[selected] -= wt;
            items[selected]+=1;
        }
        int kmin = 0;
        for (int i = 0;i<n;i++) {
            if (ship[i].size()>kmin) {
                kmin = ship[i].size();
            }
        }
        for (int i = 0;i<n;i++) {
            for (int j = ship[i].size(); j<kmin;j++) {
                ship[i].push_back(-1);
            }
        }
        for (int i = kmin - 1;i>= 0;i--) {
            for (int j = 0;j<n;j++) {
                if (ship[j][i] == -1) cout<<":";
                else cout<<ship[j][i];

                if (i >= 0 && j<n-1) cout<<" ";
            }
            cout<<endl;
        }
        for (int i = 0;i<2*n-1;i++) {
            cout<<"=";
        }
        cout<<endl;
        for (int i = 1;i<=n;i++) {
            cout<<i;
            if (i<n) cout<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<"cargo weight: "<<cargo_weight<<endl;
        cout<<"unused weight: "<<total_capacity - cargo_weight<<endl;
        cout<<"unloaded weight: "<<total_cargo - cargo_weight<<endl;
        getchar();
    }
    return 0;
}