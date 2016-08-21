#include <bits/stdc++.h>
using namespace std;

string clean(vector <string> &vs) {
    string res = "";
    for (int i = 0;i< vs.size();i++) {
        for (int j = 0;j<vs[i].size();j++) {
            if (vs[i][j] > 47 && vs[i][j] < 58) {
                res += vs[i][j];
            }
        }
    }
    return res;
}
stringstream ss;
int main () {
    int n1, n2;
    int idx = 0;
    while (1) {
        string inp;
        getline(cin, inp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> n1;
        if (n1 == 0) break;
        cout<<"Run #"<<++idx<<": ";
        vector <string> set1(n1);
        for (int i = 0;i < n1; i++) {
            getline(cin, set1[i]);
        }
        getline(cin, inp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> n2;
        vector <string> set2(n2);
        for (int i = 0;i < n2;i++) {
            getline(cin, set2[i]);
        }
        bool flag = false;
        if (n1 == n2) {
            flag = true;
            for (int i = 0;i<n1;i++) {
                if (set1[i] != set2[i]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout<<"Accepted"<<endl;
        }
        else {
            string s1 = clean(set1);
            string s2 = clean(set2);
            if (s1 == s2) {
                cout<<"Presentation Error"<<endl;
            }
            else {
                cout<<"Wrong Answer"<<endl;
            }
        }
    }
    return 0;
}
