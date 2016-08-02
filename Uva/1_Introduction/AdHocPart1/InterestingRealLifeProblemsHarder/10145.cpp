#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string inp;
    map <char, vector <int> > keys = {
        {'c', {2, 3, 4, 7, 8, 9, 10}},
        {'d', {2, 3, 4, 7, 8, 9}},
        {'e', {2, 3, 4, 7, 8}},
        {'f', {2, 3, 4, 7}},
        {'g', {2, 3, 4}},
        {'a', {2, 3}},
        {'b', {2}},
        {'C', {3}},
        {'D', {1, 2, 3, 4, 7, 8, 9}},
        {'E', {1, 2, 3, 4, 7, 8}},
        {'F', {1, 2, 3, 4, 7}},
        {'G', {1, 2, 3, 4}},
        {'A', {1, 2, 3}},
        {'B', {1, 2}},
    };
    vector <int> finger;
    getline(cin, inp);
    while (t--) {
        getline(cin, inp);
        vector <int> counter(10, 0);
        vector <int> fingers(10, 0);
        for (int i = 0; i < inp.length(); i++) {
            finger = keys[inp[i]];
            vector <int> fingers2(10, 0);
            for (auto j: finger) {
                fingers2[j-1] = 1;
            }
            for (int j = 0; j < 10; j++) {
                if (fingers[j] == 0 && fingers2[j] == 1) {
                    counter[j] += 1;
                }
                fingers[j] = fingers2[j];
            }
        }
        for (int i = 0; i < 10; i++) {
            cout<<counter[i];
            if (i < 9) {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
