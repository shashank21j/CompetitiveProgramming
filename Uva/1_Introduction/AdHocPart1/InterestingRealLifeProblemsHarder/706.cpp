#include <bits/stdc++.h>
using namespace std;

vector <int> fun(int n) {
    vector <int > nums;
    do {
        nums.push_back(n%10);
        n /= 10;
    } while(n != 0);
    reverse(nums.begin(), nums.end());
    return nums;
}
int main () {
    int s;
    string n;
    int cnt;
    map <char, vector<string> > display = {
        {'0', {" - ", "| |", "   ", "| |", " - "}},
        {'1', {"   ", "  |", "   ", "  |", "   "}},
        {'2', {" - ", "  |", " - ", "|  ", " - "}},
        {'3', {" - ", "  |", " - ", "  |", " - "}},
        {'4', {"   ", "| |", " - ", "  |", "   "}},
        {'5', {" - ", "|  ", " - ", "  |", " - "}},
        {'6', {" - ", "|  ", " - ", "| |", " - "}},
        {'7', {" - ", "  |", "   ", "  |", "   "}},
        {'8', {" - ", "| |", " - ", "| |", " - "}},
        {'9', {" - ", "| |", " - ", "  |", " - "}}
    };

    while (cin >> s>> n) {
        if (s == 0) {
            break;
        }
        vector <string> res(3 + 2 * s, "");
        for (int i1 = 0; i1 < n.length(); i1++) {
            int i = n[i1];
            cnt = 0;
            for (int j = 0; j < display[i].size(); j++) {
                string n_str = "";
                n_str += display[i][j][0];
                for (int k = 1; k < display[i][j].size() - 1; k++) {
                    for (int l = 0; l < s;l++) {
                        n_str += display[i][j][k];
                    }
                }
                n_str += display[i][j].back();
                if (i1 < n.length() - 1) {
                    n_str += " ";
                }
                if (j == 1 || j == 3) {
                    for (int l = 0; l < s;l++) {
                        res[cnt++] += n_str;
                    }
                } else {
                    res[cnt++] += n_str;
                }
            }
        }
        for (auto i: res) {
            cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
