#include <bits/stdc++.h>
using namespace std;

bool palin(string s) {
    for (int i = 0;i<s.length();i++) {
        if (s[i] != s[s.length()- 1 - i]) {
            return false;
        }
    }
    return true;
}
int main () {
    int n;
    cin>>n;
    getchar();
    for (int it =0; it<n;it++) {
        cout<<"Case #"<<it+1<<":"<<endl;
        string s;
        getline(cin,s);
        string t = "";
        for (int i = 0;i<s.length();i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                t += s[i];
            }
            else if (s[i] >= 97 && s[i] <= 122) {
                t += s[i] - 32;
            }
        }
        int ck = sqrt(t.length());
        if (ck * ck != t.length()) {
            cout<<"No magic :("<<endl;
            continue;
        }

        vector< string> grid;
        for (int i = 0;i<ck;i++) {
            string temp= "";
            for (int j = i*ck;j<(i+1)*ck;j++) {
                temp+= t[j];
            }
            grid.push_back(temp);
        }
        string s1 = "";
        string s2 = "";
        string s3 = "";
        string s4 = "";
        for (int i= 0;i<ck;i++) {
            s1 += grid[i];
        }
        for (int i = ck-1;i>=0;i--) {
            for (int j = ck-1;j>= 0;j--) {
                s2 += grid[i][j];
            }
        }
        for (int i = 0;i<ck;i++) {
            for (int j = 0;j<ck;j++) {
                s3 += grid[j][i];
            }
        }
        for (int i = ck - 1;i >= 0;i--) {
            for (int j = ck - 1;j>=0;j--) {
                s4 += grid[j][i];
            }
        }
        if (palin(s1) && palin(s2) && palin(s3) && palin(s4)) {
            cout<<ck<<endl;
        }
        else {
            cout<<"No magic :("<<endl;
        }
    }
    return 0;
}