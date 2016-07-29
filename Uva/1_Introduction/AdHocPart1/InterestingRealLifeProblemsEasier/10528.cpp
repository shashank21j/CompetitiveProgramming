#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int main() {
    string inp;
    getline(cin, inp);
    vector <string> notes = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    vector <int> scales = {0, 2, 4, 5, 7, 9, 11};
    vector <set<string> > all;
    for (int i = 0;i<12;i++) {
        set<string> temp;
        for (int j = 0; j< 7; j++) {
            temp.insert(notes[(scales[j] + i)%12]);
        }
        all.push_back(temp);
    }
    while(inp != "END") {
        ss.str("");
        ss.clear();
        ss.str(inp);
        set <string> new_v;
        string note;
        while(ss>>note) {
            new_v.insert(note);
        }
        vector <string> res;
        for (int i = 0;i<12;i++) {
            bool flag = true;
            for (auto j:new_v) {
                if (all[i].find(j) == all[i].end()) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                res.push_back(notes[i]);
            }
        }
        for (int i = 0; i< res.size();i++) {
            cout<<res[i];
            if(i < res.size()-1) cout<<" ";
        }
        cout << endl;
        getline(cin, inp);
    }
    return 0;
}
