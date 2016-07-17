#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

stringstream ss;
int main () {
    // std::ios::sync_with_stdio(false);
    int t, n;
    string inp;
    getline(cin, inp);
    ss.str("");
    ss.clear();
    ss.str(inp);
    ss >> t;
    getline(cin, inp);
    vector <string> names;
    vector < vector <int > > ballot;
    vector <int> deleted;
    while (t--) {
        getline(cin, inp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> n;
        names.clear();
        names.resize(n);
        for (int i = 0; i< n;i++) {
            getline(cin, names[i]);
        }
        getline(cin, inp);
        ballot.clear();
        deleted.clear();
        deleted.resize(n+1, 0);
        while (inp != "") {
            ss.str("");
            ss.clear();
            ss.str(inp);
            vector <int> temp(n);
            for (int i = 0; i < n; i++) {
                ss >> temp[i];
            }
            reverse(temp.begin(), temp.end());
            ballot.push_back(temp);
            getline(cin, inp);
        }
        vector <int> maxs;
        vector < pair< int, int> >cnt1;
        while(1) {
            map <int, int> cnt;

            for (int i = 0; i < (int)ballot.size(); i++) {
                if(!ballot[i].empty()) {
                    cnt[ballot[i].back()] += 1;
                }
            }
            cnt1.clear();
            for (auto i: cnt) {
                cnt1.push_back(make_pair(i.second,i.first));
            }
            if(cnt1.size() == 0) {
                break;
            }
            sort(cnt1.begin(), cnt1.end());

            maxs.clear();
            auto temp2 = *cnt1.rbegin();
            int maxi = temp2.first;

            auto temp1 = *cnt1.begin();
            int mini = temp1.first;
            for (int i = 1;i<=n;i++) {
                if (cnt[i] == 0) deleted[i] = 1;
            }
            for (auto ii:cnt1) {
                if (ii.first == mini) {
                    deleted[ii.second] = 1;
                }
                if (ii.first == maxi) {
                    maxs.push_back(ii.second);
                }
            }

            if (maxi > (int)(ballot.size()/2)) break;
            for (int i = 0; i< (int)ballot.size();i++) {
                while (!ballot[i].empty() && deleted[ballot[i].back()]) {
                    ballot[i].pop_back();
                }
            }

        }
        for (auto i:maxs) {
            cout<<names[i-1]<<endl;
        }
        if (t > 0) cout<<endl;
    }
    return 0;
}
