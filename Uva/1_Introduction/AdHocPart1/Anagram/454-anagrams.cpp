#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    string st;
    getchar();
    getline(cin, st);
    while (n--) {
        getline(cin, st);
        map <string, vector <string> > dic;
        vector <string> input;
        while (st.length() > 0) {
            input.push_back(st);
            getline(cin,st);
        }
        sort(input.begin(), input.end());
        vector <pair< string, string> > res;
        for (int i = 0;i<input.size();i++) {
            for (int j = 0;j<input.size();j++) {
                if (i == j) continue;
                string t1 = input[i];
                string t2 = input[j];
                if (t1 > t2) {
                    continue;
                }
                if (t1 == t2 && i > j) {
                    continue;
                }
                string r1 = "";
                string r2 = "";
                vector <char> tmp1;
                vector <char> tmp2;
                for (auto k:t1) {
                   if (k != ' ') {
                        tmp1.push_back(k);
                    }
                }
                for (auto k:t2) {
                   if (k != ' ') {
                        tmp2.push_back(k);
                    }
                }
                sort (tmp1.begin(), tmp1.end());
                sort (tmp2.begin(), tmp2.end());

                for (auto k:tmp1) {
                   r1+=k;
                }
                for (auto k:tmp2) {
                   r2+=k;
                }

                if (r1 == r2) {
                    res.push_back(make_pair(t1,t2));
                }
            }
        }

        for (auto i: res) {
            cout << i.first << " = " << i.second << endl;
        }

        if (n > 0) {
            cout << endl;
        }
        dic.clear();
    }
    return 0;
}
