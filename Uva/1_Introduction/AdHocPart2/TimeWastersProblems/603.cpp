#include <bits/stdc++.h>
using namespace std;
stringstream ss;
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector <pair <int, int> > waiting2(20, make_pair(0,0));
        vector <pair <int, int> > waiting3(20, make_pair(0,0));
        vector <int> waiting;
        vector <int> go_out;
        map <int, int> res;
        int n;
        cin >> n;
        while (n != 99) {
            waiting2[n-1] = make_pair(n-1, 1);
            waiting.push_back(n);
            cin >> n;
        }
        string inp;
        getline(cin, inp);
        getline(cin, inp);
        while(inp != "") {
            ss.str("");
            ss.clear();
            ss.str(inp);
            ss >> n;
            go_out.push_back(n);
            getline(cin, inp);
        }
        for (auto i:go_out) {
            int bck = i;
            int ctr = 0;
            while (waiting2[bck - 1].second == 0 && ctr < 20) {
                bck -= 1;
                if (bck < 1) bck+= 20;
                ctr += 1;
            }
            waiting2[bck - 1].second = 0;
            res[waiting2[bck-1].first] = i;
            int d = i - bck;
            if (d < 0) d += 20;
            for (int j = 0; j < 20; j++) {
                waiting3[j].first = waiting2[j].first;
                waiting3[j].second = waiting2[j].second;
            }
            for (int j = 0; j < waiting2.size(); j++) {
                int temp = j + d;
                temp %= 20;
                waiting2[temp].second = waiting3[j].second;
                waiting2[temp].first = waiting3[j].first;
            }
        }
        for (auto i: waiting) {
            if (res.find(i-1) == res.end()) {
                cout << "Original position " << i << " did not park" << endl;
            } else {
                cout << "Original position " << i << " parked in " << res[i-1] <<endl;
            }
        }
        if (t > 0 ) cout<< endl;
    }
    return 0;
}
