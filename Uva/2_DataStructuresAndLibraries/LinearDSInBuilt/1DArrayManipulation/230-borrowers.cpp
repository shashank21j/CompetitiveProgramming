#include <bits/stdc++.h>

using namespace std;
static inline std::string &ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}
static inline std::string &rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}
static inline std::string &trim(std::string &s) {
    return ltrim(rtrim(s));
}
int main () {
    string inp;
    set<pair<string, string> > lib;
    map <string, string> dic;
    set <pair<string, string> > deposit;
    while (getline(cin, inp)) {
        inp = trim(inp);
        if (inp == "END") {
            break;
        }
        string title = "";
        string name = "";
        int pos = 1;
        while (inp[pos] != '"') {
            title += inp[pos];
            pos+= 1;
        }
        pos += 5;
        while(pos < (int)inp.length()) {
            name += inp[pos];
            pos += 1;
        }
        name = trim(name);
        title = trim(title);
        lib.insert(make_pair(name, title));
        dic[title] = name;
    }
    // sort(lib.begin(), lib.end());
    while(getline(cin, inp)) {
        inp = trim(inp);
        if (inp == "END") {
            break;
        }
        inp += ' ';
        string command = "";
        string name = "";
        int pos = 0;
        while(inp[pos] != ' ') {
            command += inp[pos];
            pos += 1;
        }
        command = trim(command);
        if (command == "SHELVE") {
            for (auto i:deposit) {

                lib.insert(i);
                if (i == *lib.begin()) {
                    cout << "Put \"" << i.second << "\" first" << endl;
                    continue;
                }
                set <pair< string, string> > :: iterator it = lib.begin();
                for (set<pair<string, string> >:: iterator it1 = lib.begin(); it1 != lib.end(); it1++) {
                    if (*it1 == i) {
                        break;
                    }
                    it = it1;
                }

                cout << "Put \"" << i.second << "\" after \""
                    << it->second << "\"" << endl;
            }
            deposit.clear();
            cout<<"END"<<endl;
            continue;
        }
        pos += 2;
        while(inp[pos] != '"') {
            name += inp[pos];
            pos += 1;
        }
        name = trim(name);
        if (command == "BORROW") {
            lib.erase(make_pair(dic[name], name));
        } else if (command == "RETURN") {
            string auth = dic[name];
            pair <string, string> cmp = make_pair(auth, name);
            deposit.insert(cmp);
        }
    }
    return 0;
}
