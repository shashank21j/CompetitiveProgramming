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

int main() {
    int t;
    cin >> t;
    map <string, char> codes = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'},
        {".", 'E'}, {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'},
        {"..", 'I'}, {".---", 'J'}, {"-.-", 'K'}, {".-..", 'L'},
        {"--", 'M'}, {"-.", 'N'}, {"---", 'O'}, {".--.", 'P'},
        {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
        {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'},
        {"-.--", 'Y'}, {"--..", 'Z'}, {"-----", '0'}, {".----" ,'1'},
        {"..---", '2'}, {"...--", '3'}, {"....-", '4'}, {".....", '5'},
        {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'},
        {".-.-.-", '.'}, {"--..--", ','}, {"..--..", '?'}, {".----.", '\''},
        {"-.-.--", '!'}, {"-..-.", '/'}, {"-.--.", '('}, {"-.--.-", ')'},
        {".-...", '&'}, {"---...", ':'}, {"-.-.-.", ';'}, {"-...-", '='},
        {".-.-.", '+'}, {"-....-", '-'}, {"..--.-", '_'}, {".-..-.", '"'},
        {".--.-.", '@'}
    };
    string inp;
    getline(cin, inp);
    int idx= 0;
    while (t--) {
        cout <<"Message #"<<++idx<<endl;
        getline(cin, inp);
        vector <string> words = chomp(inp);
        string res = "";
        int counter = 0;
        for (auto i:words) {
            res += codes[i];
            counter += (int)i.length() + 1;

            if (counter < inp.length() && inp[counter] == ' ' && inp[counter - 1] == ' ') {
                res += ' ';
                counter += 1;
            }
        }
        cout<<res<<endl;
        if (t > 0) {
            cout<<endl;
        }
    }
    return 0;
}
