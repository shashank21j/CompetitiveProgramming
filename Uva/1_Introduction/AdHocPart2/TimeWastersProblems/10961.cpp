#include <bits/stdc++.h>
using namespace std;

int dist(pair< int, int> x, pair <int, int> y) {
    return (abs(x.first - y.first) + abs(x.second - y.second));
}

int main (){
    int tests;
    cin>>tests;
    while (tests--) {
        pair <int, int> villagers_pos;
        pair <int, int> don_pos;
        cin >> villagers_pos.first >> villagers_pos.second;
        cin >> don_pos.first >> don_pos.second;
        int don_steps;
        int villagers_steps;
        cin >> don_steps;
        vector <pair<int, int> > don(don_steps+1);
        don[0] = don_pos;
        for (int i = 1; i < don_steps + 1; i++) {
            cin >> don[i].first >> don[i].second;
        }

        cin >> villagers_steps;
        vector <pair<int, int> > villagers(villagers_steps + 1);
        villagers[0] = villagers_pos;
        for (int i = 1; i < villagers_steps + 1; i++) {
            cin >> villagers[i].first >> villagers[i].second;
        }
        int i = 0;
        int j = 0;
        bool flag = true;
        while(j < don_steps && i < villagers_steps) {
            if (don[j] == don[j+1]) {
                j+= 1;
                continue;
            }
            if (villagers[i] == villagers[i+1]) {
                i += 1;
                continue;
            }
            int collision_dist = dist(villagers[i], don[j]);
            if (collision_dist % 2 == 1) {
                i += 1;
                j += 1;
                continue;
            }
            int steps = min(dist(villagers[i], villagers[i+1]), min(dist(don[j], don[j+1]), collision_dist/2));
            if (villagers[i].first > villagers[i+1].first) {
                villagers[i].first -= steps;
            } else if (villagers[i].first < villagers[i+1].first) {
                villagers[i].first += steps;
            } else if (villagers[i].second > villagers[i+1].second) {
                villagers[i].second -= steps;
            } else if (villagers[i].second < villagers[i+1].second) {
                villagers[i].second += steps;
            }

            if (don[j].first > don[j+1].first) {
                don[j].first -= steps;
            } else if (don[j].first < don[j+1].first) {
                don[j].first += steps;
            } else if (don[j].second > don[j+1].second) {
                don[j].second -= steps;
            } else if (don[j].second < don[j+1].second) {
                don[j].second += steps;
            }
            if (don[j] == villagers[i]) {
                if (don[j] == don[don_steps]) {
                    break;
                }
                flag = false;
                break;
            }

        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
        if (tests > 0) cout << endl;
    }
    return 0;
}
