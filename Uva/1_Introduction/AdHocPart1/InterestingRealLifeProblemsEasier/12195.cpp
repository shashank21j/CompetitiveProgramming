#include <bits/stdc++.h>
using namespace std;

stringstream ss;

int main() {
    string inp;
    getline(cin, inp);
    while (inp != "*") {
        ss.str("");
        ss.clear();
        ss.str(inp);
        vector <string> measure;
        string ele;
        getline(ss, ele, '/');
        int cnt = 0;
        while(getline(ss, ele, '/')) {
            int scr = 0;
            for (int i = 0;i < ele.length();i++) {
                if (ele[i] == 'W') {
                    scr += 64;
                } else if (ele[i] == 'H') {
                    scr += 32;
                } else if (ele[i] == 'Q') {
                    scr += 16;
                } else if (ele[i] == 'E') {
                    scr += 8;
                } else if (ele[i] == 'S') {
                    scr += 4;
                } else if (ele[i] == 'T') {
                    scr += 2;
                } else if (ele[i] == 'X') {
                    scr += 1;
                }
                if (scr > 64) break;
            }
            if (scr == 64) {
                cnt += 1;
            }
        }
        cout<<cnt<<endl;
        getline(cin, inp);
    }
    return 0;
}
