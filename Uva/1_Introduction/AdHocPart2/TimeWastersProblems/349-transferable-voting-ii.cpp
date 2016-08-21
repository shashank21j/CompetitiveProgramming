#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    int max_val;
    int min_val;
    int idx = 0;
    while(1) {
        cin>>c>>n;
        if (n + c == 0) {
            break;
        }
        cout<<"Election #"<<++idx<<endl;
        vector <vector <int> > ballot(n,vector<int> (c,0));
        vector <bool> valid(n);
        int valid_counter = 0;
        for (int i = 0;i<n;i++) {
            for (int j = 0;j < c;j++) {
                cin >> ballot[i][j];
            }
            reverse(ballot[i].begin(), ballot[i].end());
            set <int> check;
            for (auto ii:ballot[i]) {
                check.insert(ii);
            }
            if (check.size() == c && *check.rbegin() == c && *check.begin() == 1) {
                valid[i] = true;
                valid_counter += 1;
            } else {
                valid[i] = false;
            }
        }
        if (valid_counter < n) {
            cout<<"   "<<n - valid_counter<<" bad ballot(s)"<<endl;
        }
        vector <int> deleted(c, 0);
        while (1) {
            vector <int> counters(c,0);
            for (int i = 0; i < n; i++) {
                if(!valid[i]) {
                    continue;
                }
                counters[ballot[i].back() - 1] += 1;
            }
            vector <int> max_index;
            max_val = -1;
            vector <int> min_index;
            min_val = INT_MAX;
            for (int i = 0;i < c; i++) {
                if (deleted[i]) {
                    continue;
                }
                if (counters[i] > max_val) {
                    max_val = counters[i];
                    max_index.clear();
                    max_index.push_back(i);
                } else if (counters[i] == max_val) {
                    max_index.push_back(i);
                }

                if (counters[i] < min_val) {
                    min_val = counters[i];
                    min_index.clear();
                    min_index.push_back(i);
                } else if (counters[i] == min_val) {
                    min_index.push_back(i);
                }
            }
            // cout<<min_index[0] + 1<<endl;
            deleted[min_index[0]] = 1;
            if (max_val > valid_counter/2) {
                cout<<"   Candidate "<<max_index[0]+1<<" is elected."<<endl;
                break;
            }
            if ((int)max_index.size() > 1 && max_val*(int)max_index.size() == valid_counter) {
                cout<<"   The following candidates are tied: ";
                for (int i = 0;i< max_index.size();i++) {
                    cout << max_index[i] + 1;
                    if (i < max_index.size() - 1) cout<< " ";
                }
                cout << endl;
                break;
            }
            for (int i = 0;i < n; i++) {
                while (deleted[ballot[i].back()-1]) {
                    ballot[i].pop_back();
                }
            }
        }
    }
    return 0;
}
