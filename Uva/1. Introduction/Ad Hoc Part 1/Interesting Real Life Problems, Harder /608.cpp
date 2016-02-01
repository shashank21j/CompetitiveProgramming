#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    while(n--) {
        vector <int> chk(12,0);
        string s1,s2,s3;
        for (int it = 0;it<3;it++) {
            cin>>s1>>s2>>s3;
            int t;
            if (s3 == "even") {
                for (int i = 0;i<s1.length();i++) {
                    chk[s1[i]-65] = 2;
                }
                for (int i = 0;i<s2.length();i++) {
                    chk[s2[i]-65] = 2;
                }
            }
            else if (s3 == "up" || s3 == "down") {
                string s = s1 + s2;
                for (int i = 0;i<12;i++) {
                    bool flag = true;
                    for (int j = 0;j<s.length();j++) {
                        if (i == s[j]-65) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag == true) {
                        chk[i] = 2;
                    }
                }
                for (int i = 0;i<s1.length();i++) {
                    t = s1[i] - 65;
                    if (chk[t] != 2) {
                        if (s3 == "up") {
                            if (chk[t] == 1) chk[t] = 2;
                            else chk[t] = -1;
                        }
                        else {
                            if (chk[t] == -1) chk[t] = 2;
                            else chk[t] = 1;
                        }
                    }
                }
                for (int i = 0;i<s2.length();i++) {
                    t = s2[i] - 65;
                    if (chk[t] != 2) {
                        if (s3 == "up") {
                            if (chk[t] == -1) chk[t] = 2;
                            else chk[t] = 1;
                        }
                        else {
                            if (chk[t] == 1) chk[t] = 2;
                            else chk[t] = -1;
                        }
                    }
                }
            }
        }
        for (int i = 0;i<12;i++) {
            if (chk[i] == 1) {
                cout<<(char)(i+65)<<" is the counterfeit coin and it is light."<<endl;
            }
            else if (chk[i] == -1) {
                cout<<(char)(i+65)<<" is the counterfeit coin and it is heavy."<<endl;
            }
        }
    }
    return 0;
}