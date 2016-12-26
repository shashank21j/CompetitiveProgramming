#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    while (cin>>n) {
        int m;
        cin>>m;
        string s;
        cin>>s;
        map<char,int> awake;
        map<char,vector<char> > graph;
        int awake_cnt = 0;
        for (int i = 0;i<3;i++) {
            awake[s[i]] = 1;
            awake_cnt++;
        }
        string temp;
        for (int i = 0;i<m;i++) {
            cin>>temp;
            graph[temp[0]].push_back(temp[1]);
            graph[temp[1]].push_back(temp[0]);
        }

        int yrs = 0;
        while (1) {
            bool ex_flag = true;
            if (awake_cnt == n) {
                cout<<"WAKE UP IN, "<<yrs<<", YEARS"<<endl;
                break;
            }
            yrs++;
            vector <char> who;
            for (auto i: graph) {
                if (awake.find(i.first)!= awake.end()) {
                    continue;
                }
                int t_cnt = 0;
                for (int j = 0;j<i.second.size();j++) {
                    if (awake.find(i.second[j])!= awake.end()) {
                        t_cnt++;
                    }
                }
                if (t_cnt >= 3) {
                    who.push_back(i.first);
                    ex_flag = false;
                }
            }
            for (int i = 0;i<who.size();i++) {
                awake[who[i]] = 1;
                awake_cnt++;
            }
            if (ex_flag == true) {
                cout<<"THIS BRAIN NEVER WAKES UP"<<endl;
                break;
            }
        }

    }
    return 0;
}