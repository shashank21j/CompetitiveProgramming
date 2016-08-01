#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <string> notes = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    map <string, string> alt_notes = {
        {"B#", "C"}, {"Cb", "B"}, {"Db", "C#"}, {"Eb", "D#"}, {"E#", "F"},
        {"Fb", "E"}, {"Gb", "F#"}, {"Ab", "G#"}, {"Bb", "A#"}
    };
    map<string, vector <string> > major = {
        {"C",  {"C", "E", "G"}},
        {"C#", {"C#", "F", "G#"}},
        {"D",  {"A", "D", "F#"}},
        {"D#", {"A#", "D#", "G"}},
        {"E",  {"B", "E", "G#"}},
        {"F",  {"A", "C", "F"}},
        {"F#", {"A#", "C#", "F#"}},
        {"G",  {"B", "D", "G"}},
        {"G#", {"C", "D#", "G#"}},
        {"A",  {"A", "C#", "E"}},
        {"A#", {"A#", "D", "F"}},
        {"B",  {"B", "D#", "F#"}}
    };
    map<string, vector <string> > minor = {
        {"C",  {"C", "D#", "G"}},
        {"C#", {"C#", "E", "G#"}},
        {"D",  {"A", "D", "F"}},
        {"D#", {"A#", "D#", "F#"}},
        {"E",  {"B", "E", "G"}},
        {"F",  {"C", "F", "G#"}},
        {"F#", {"A", "C#", "F#"}},
        {"G",  {"A#", "D", "G"}},
        {"G#", {"B", "D#", "G#"}},
        {"A",  {"A", "C", "E"}},
        {"A#", {"A#", "C#", "F"}},
        {"B",  {"B", "D", "F#"}}
    };
    string a, b, c;
    while (cin >> a >> b >> c) {
        vector <string> test = {a, b, c};
        for (int i = 0; i < 3; i++) {
            if (test[i][0] >= 97 && test[i][0] <= 122) {
                test[i][0] -= 32;
            }
            if (alt_notes.find(test[i]) != alt_notes.end()) {
                test[i] = alt_notes[test[i]];
            }
        }
        sort(test.begin(), test.end());
        bool found;
        string res;
        for (auto i:major) {
            found = true;
            res = i.first;
            for (int j = 0; j < 3; j++) {
                if (i.second[j] != test[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            cout << a << " " << b << " " << c << " is a " << res << " Major chord." << endl;
            continue;
        }
        for (auto i:minor) {
            found = true;
            res = i.first;
            for (int j = 0; j < 3; j++) {
                if (i.second[j] != test[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            cout << a << " " << b << " " << c << " is a " << res << " Minor chord." << endl;
        } else {
            cout << a << " " << b << " " << c << " is unrecognized." << endl;
        }

    }
    return 0;
}
