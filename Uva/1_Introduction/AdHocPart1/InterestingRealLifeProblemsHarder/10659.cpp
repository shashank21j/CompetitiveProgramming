#include <bits/stdc++.h>
using namespace std;
stringstream ss;

vector <string > chomp(string line) {
    ss.str("");
    ss.clear();
    ss.str(line);
    vector <string> res;
    string word;
    while(ss >> word) {
        res.push_back(word);
    }
    return res;
}
int main () {
    int t;
    int size_x, size_y;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string sentence;
        vector < vector<string> > slide;
        getline(cin, sentence);
        for (int i = 0; i < n; i++) {
            getline(cin, sentence);
            vector <string> words = chomp(sentence);
            slide.push_back(words);
        }
        cin >> size_x >> size_y;
        int font = 28;
        bool doable = false;
        while (font > 7) {
            doable = true;
            int line = 0;
            int y_dim = size_y;
            int x_dim = size_x;
            bool line_first_word;
            for (int i = 0; i < (int)slide.size(); i++) {
                line_first_word = true;
                for (int j = 0; j < (int)slide[i].size(); j++) {
                    string w = slide[i][j];

                    if (!line_first_word) {
                        x_dim -= font;
                    }
                    if (font > y_dim  || font*(int)w.length() > size_x) {
                        doable = false;
                        break;
                    }
                    if ((font * (int)w.length()) > x_dim) {
                        x_dim = size_x;
                        line += 1;
                        y_dim -= font;
                        line_first_word = true;
                    }
                    if (font > y_dim) {
                        doable = false;
                        break;
                    }
                    if (font * (int)w.length() <= x_dim) {
                        x_dim -= font*(int)w.length();
                        line_first_word = false;
                    }
                }
                x_dim = size_x;
                y_dim -= font;
                if (y_dim < 0 || x_dim <0) {
                    doable = false;
                }
                if (!doable) break;
            }

            if (doable) {
                break;
            }
            font -= 1;
        }
        if (doable) {
            cout << font << endl;
        } else {
            cout << "No solution" << endl;
        }
    }
    return 0;
}
