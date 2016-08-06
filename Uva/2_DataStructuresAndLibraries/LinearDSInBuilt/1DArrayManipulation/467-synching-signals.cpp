#include <bits/stdc++.h>
using namespace std;

stringstream ss;
vector <int> readints(string s) {
    vector <int> res;
    int ele;
    ss.str("");
    ss.clear();
    ss.str(s);
    while (ss >> ele) {
        res.push_back(ele);
    }
    return res;
}
int main (){
    string inp;
    int idx = 0;
    while(getline(cin, inp)) {
        vector <int> vals;
        vals = readints(inp);
        int sz = (int)vals.size();
        vector <pair<int, int> > val_pair(sz);
        for (int i = 0; i< sz; i++) {
            val_pair[i] = make_pair(0, vals[i] - 5);
        }

        bool first_iter = true;
        while (1) {
            bool increment = false;
            int max_begin = -1;
            int min_end = INT_MAX;
            for (int i = 0; i < sz; i++) {
                max_begin = max(max_begin, val_pair[i].first);
                min_end = min(min_end, val_pair[i].second);
            }
            for (int i = 0; i < sz; i++) {
                if (val_pair[i].second <= max_begin) {
                    val_pair[i].first += 2*vals[i];
                    val_pair[i].second = val_pair[i].first + vals[i] - 5;
                    increment = true;
                }
            }
            if (increment) {
                first_iter = false;
                continue;
            }
            if (!increment && first_iter && max_begin == 0) {
                first_iter = false;
                for (int i = 0; i< sz; i++) {
                    if (val_pair[i].second == min_end) {
                        val_pair[i].first += 2*vals[i];
                        val_pair[i].second = val_pair[i].first + vals[i] - 5;
                    }
                }
                continue;
            }
            int mini = INT_MAX;
            int maxi = -1;
            for (int i = 0; i < sz; i++) {
                maxi = max(maxi, val_pair[i].first);
                mini = min(mini, val_pair[i].second);
            }
            if (maxi > 3600) {
                cout<<"Set "<<++idx<<" is unable to synch after one hour."<<endl;
                break;
            }
            if (mini - maxi > 0) {
                cout << "Set " << ++idx << " synchs again at " << maxi / 60
                << " minute(s) and " << maxi % 60 << " second(s) after all turning green." << endl;
                break;
            }
        }
    }
    return 0;
}
