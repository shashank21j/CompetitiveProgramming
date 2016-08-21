#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, p;
    while(cin >> g >> p) {
        if (g + p == 0) {
            break;
        }
        vector <vector <int> > races(g, vector <int> (p, 0));
        for (int i = 0; i < g; i++) {
            for (int j = 0; j < p; j++) {
                cin >> races[i][j];
            }
        }
        int s;
        cin >> s;
        for (int i = 0; i < s; i++) {
            vector <int> score(p, 0);
            vector <int> score_prix(p, 0);
            int k;
            cin >> k;
            for (int j = 0; j < k; j++) {
                cin >> score[j];
            }
            for (int i1 = 0; i1 < g; i1++) {
                for (int j1 = 0; j1 < p; j1++) {
                    score_prix[j1] += score[races[i1][j1]-1];
                }
            }
            int maxi = -1;
            vector <int> winners;
            for (int i1 = 0; i1 < p; i1++) {
                if (score_prix[i1] > maxi) {
                    maxi = score_prix[i1];
                    winners = {i1};
                } else if (score_prix[i1] == maxi) {
                    winners.push_back(i1);
                }
            }
            for (int i1 = 0; i1 < (int)winners.size(); i1++) {
                cout << winners[i1] + 1;
                if (i1 < (int)winners.size() - 1) cout << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
