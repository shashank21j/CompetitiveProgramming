#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int main() {
    int t;
    string inp;
    getline(cin, inp);
    ss.str("");
    ss.clear();
    ss.str(inp);
    ss >> t;
    getline(cin, inp);
    while (t--) {
        getline(cin, inp);
        int time = 0;
        int bait = 0;
        int fish = 0;
        int fish_time = 0;
        bool first_fish = true;
        int last_fish_time = 0;
        last_fish_time = 0;
        while(inp != "") {
            if (inp == "fish") {
                if (bait > 1) {
                    if (first_fish || (fish_time >= 20 && (time - last_fish_time) >= 70)) {
                        fish += 1;
                        bait -= 2;
                        last_fish_time = time;
                        first_fish = false;
                        fish_time = 0;
                    }
                    else {
                        fish_time += 10;
                    }
                }
                time += 10;
            } else if (inp == "bait") {
                if (bait < 6) {
                    bait += 1;
                }
                time += 10;
            } else {
                time += 10;
            }
            getline(cin, inp);
        }
        cout << fish << endl;
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
