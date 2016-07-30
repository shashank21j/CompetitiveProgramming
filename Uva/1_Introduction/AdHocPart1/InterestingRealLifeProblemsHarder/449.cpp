#include <bits/stdc++.h>
using namespace std;
stringstream ss;

int main () {
    string scale;
    string inp;

    map<string, vector <string> > notes = {
        {"C",  {"C", "D", "E", "F", "G", "A", "B"}},
        {"Db", {"Db", "Eb", "F", "Gb", "Ab", "Bb", "C"}},
        {"D",  {"D", "E", "F#", "G", "A", "B", "C#"}},
        {"Eb", {"Eb", "F", "G", "Ab", "Bb", "C", "D"}},
        {"E",  {"E", "F#", "G#", "A", "B", "C#", "D#"}},
        {"F",  {"F", "G", "A", "Bb", "C", "D", "E"}},
        {"Gb", {"Gb", "Ab", "Bb", "Cb", "Db", "Eb", "F"}},
        {"G",  {"G", "A", "B", "C", "D", "E", "F#"}},
        {"Ab", {"Ab", "Bb", "C", "Db", "Eb", "F", "G"}},
        {"A",  {"A", "B", "C#", "D", "E", "F#", "G#"}},
        {"Bb", {"Bb", "C", "D", "Eb", "F", "G", "A"}},
        {"B",  {"B", "C#", "D#", "E", "F#", "G#", "A#"}}
    };

    while (getline(cin, scale)) {
        getline(cin, inp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        string qq;
        cout<<"Key of "<<scale<<endl;
        vector <string> note = notes[scale];
        while(getline(ss, qq, ';')) {
            string key = "";
            string dir = "";
            string step = "";
            int i = 0;
            for (; qq[i] != ' '; ) {
                key += qq[i];
                i+= 1;
            }
            i+= 1;
            for (; qq[i] != ' '; ) {
                dir += qq[i];
                i+= 1;
            }
            i+= 1;
            for (; i < qq.length(); i++) {
                step += qq[i];
            }
            int start = -1;
            for (int i = 0; i < note.size(); i++) {
                if (note[i] == key) {
                    start = i;
                }
            }
            if (start == -1) {
                cout<<key<<": invalid note for this key"<<endl;
                continue;
            }
            if (step == "SECOND") {
                if (dir == "UP") {
                    cout <<key<<": UP SECOND > "<<note[(start + 1)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN SECOND > "<<note[(start + 7 - 1)%7]<<endl;
                }
            } else if (step == "THIRD") {
                if (dir == "UP") {
                    cout <<key<<": UP THIRD > "<<note[(start + 2)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN THIRD > "<<note[(start + 7 - 2)%7]<<endl;
                }
            } else if (step == "FOURTH") {
                if (dir == "UP") {
                    cout <<key<<": UP FOURTH > "<<note[(start + 3)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN FOURTH > "<<note[(start + 7 - 3)%7]<<endl;
                }
            } else if (step == "FIFTH") {
                if (dir == "UP") {
                    cout <<key<<": UP FIFTH > "<<note[(start + 4)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN FIFTH > "<<note[(start + 7 - 4)%7]<<endl;
                }
            } else if (step == "SIXTH") {
                if (dir == "UP") {
                    cout <<key<<": UP SIXTH > "<<note[(start + 5)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN SIXTH > "<<note[(start + 7 - 5)%7]<<endl;
                }
            } else if (step == "SEVENTH") {
                if (dir == "UP") {
                    cout <<key<<": UP SEVENTH > "<<note[(start + 6)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN SEVENTH > "<<note[(start + 7 - 6)%7]<<endl;
                }
            } else if (step == "OCTAVE") {
                if (dir == "UP") {
                    cout <<key<<": UP OCTAVE > "<<note[(start + 7)%7]<<endl;
                } else if (dir == "DOWN") {
                    cout <<key<<": DOWN OCTAVE > "<<note[(start + 7 - 7)%7]<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
