#include <bits/stdc++.h>

using namespace std;

vector <string> res;
vector <string> result;
void fun (int init, vector <string> &dic, unordered_map <char,int> querry) {
    for (int i = init;i<dic.size();i++) {
        unordered_map <char,int> temp;
        string word = dic[i];
        for (int j = 0; j < word.size(); j++) {
            if (temp.find(word[j]) == temp.end()) {
                temp[word[j]] = 1;
            } else {
                temp[word[j]] += 1;
            }
        }
        bool flag = true;
        for (auto ii:temp) {
            if (ii.second > querry[ii.first]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            for (auto ii:temp) {
                querry[ii.first] -= ii.second;
            }
            res.push_back(word);
            fun(i+1, dic, querry);
            for (auto ii:temp) {
                querry[ii.first] += ii.second;
            }
            res.pop_back();
        }
    }
    int sum = 0;
    for (auto i:querry) {
        sum += i.second;
    }
    if (sum == 0) {
        string r = "";
        sort(res.begin(), res.end());
        for (int i = 0;i < res.size();i++) {
            r = r + res[i];
            if (i < res.size() -1 ) {
                r = r + " ";
            }
        }
        result.push_back(r);
    }
}
int main () {
    string s;
    cin>>s;
    vector <string> dictionary;
    while (s != "#") {
        dictionary.push_back(s);
        cin>>s;
    }
    getline(cin,s);
    getline(cin,s);
    while (s != "#") {
        stringstream ss(s);
        vector <string> sorted_querry;
        string t1;
        while (ss>>t1) sorted_querry.push_back(t1);
        sort(sorted_querry.begin(), sorted_querry.end());
        string t = "";
        for (int i = 0;i < sorted_querry.size(); i++) {
            t = t+sorted_querry[i];
            if (i < sorted_querry.size() -1) {
                t = t + " ";
            }
        }
        unordered_map <char,int> querry;
        for (int i = 0;i < s.length();i++) {
            if (s[i] == ' ') continue;
            if (querry.find(s[i]) == querry.end()) {
                querry[s[i]] = 1;
            } else {
                querry[s[i]] += 1;
            }
        }
        vector <string> dic;
        for (int i = 0;i < dictionary.size();i++) {
            unordered_map <char,int> temp;
            string word = dictionary[i];
            for (int j = 0; j < word.size(); j++) {
                if (temp.find(word[j]) == temp.end()) {
                    temp[word[j]] = 1;
                } else {
                    temp[word[j]] += 1;
                }
            }
            bool flag = true;
            for (auto ii:temp) {
                if (ii.second > querry[ii.first]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                dic.push_back(word);
            }
        }
        res.clear();
        result.clear();
        fun(0, dic, querry);
        sort(result.begin(), result.end());
        for (auto i: result) {
            if (i == t) continue;
            cout<<s<<" = "<<i<<endl;
        }
        getline(cin,s);
    }
    return 0;
}
