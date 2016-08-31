#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int r, c, p;
    cin >> t;
    while (t--) {
        cin >> r >> c >> p;
        int X = 0;
        int Y = 0;
        vector <pair<int, int> > ppl(p);
        for (int i = 0; i < p; i++) {
            cin >> ppl[i].first;
            cin >> ppl[i].second;
            X += ppl[i].first;
            Y += ppl[i].second;
        }
        X /= p;
        Y /= p;
        vector <pair <int, pair<int, int> > > dist(p);
        for (int i = 0; i < p; i++) {
            int d = abs(ppl[i].first - X) + abs(ppl[i].second - Y);
            dist[i] = make_pair(d, ppl[i]);
        }
        sort(dist.begin(), dist.end());
        int min_d = INT_MAX;
        pair <int, int> res = make_pair(INT_MAX, INT_MAX);
        for (int i = 0; i < min(p, 1000000); i++) {
            pair <int, int> candidate = dist[i].second;
            int d = 0;
            for (int i = 0; i < p; i++) {
                d += abs(ppl[i].first - candidate.first) + abs(ppl[i].second - candidate.second);
            }
            if (d < min_d) {
                min_d = d;
                res = candidate;
            } else if (d == min_d && candidate.first < res.first) {
                res = candidate;
            } else if (d == min_d && candidate.first == res.first && candidate.second < res.second) {
                res = candidate;
            }
        }
        cout << "(Street: " << res.first << ", Avenue: " << res.second << ")" << endl;
    }
    return 0;
}
