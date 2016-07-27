#include <bits/stdc++.h>
using namespace std;

bool same(vector <string> a, vector <string> b) {
    for (int i = 1; i<a.size(); i++) {
        if (!(a[i] == b[i] || a[i] == "*")) {
            return false;
        }
    }
    return true;
}
int main () {
    int t;
    string originator;
    int n;
    int idx = 0;
    while(cin >> t) {
        cout << "Scenario # " << ++idx << endl;
        map<string, vector <vector <string> > > routing;
        while (t--) {
            cin >> originator >> n;
            for (int i = 0; i < n; i++) {
                vector <string> temp(5);
                for (int j = 0; j < 5; j++) {
                    cin >> temp[j];
                }
                routing[originator].push_back(temp);
            }
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
            vector <string> query(5);
            for (int j = 0; j < 5; j++) {
                cin >> query[j];
            }
            string source = query[0];
            string destination;
            map <string, bool> touched;
            for (auto maps:routing) {
                touched[maps.first] = false;
            }
            cout<<i+1;
            while (1) {
                bool found = false;
                if (touched[source]) {
                    cout << " -- circular routing detected by "<< source << endl;
                    break;
                }
                for (auto maps: routing[source]) {
                    if (same(maps, query)) {
                        destination = maps[0];
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout<<" -- unable to route at "<< source << endl;
                    break;
                }
                if (source == destination) {
                    cout<<" -- delivered to "<< source << endl;
                    break;
                } else {
                    touched[source] = true;
                    source = destination;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
