#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    while(getline(cin,s)) {
        deque <char> st;
        int it = 0;
        bool flag = false;
        while (it < s.length()) {
            if ((isalpha(s[it]) || s[it] == '_') ) {
                st.push_back(s[it]);
                it += 1;
                continue;
            }
            else if (s[it] == ']') {
                it+=1;
                continue;
            }
            else if (s[it] == '[' ) {
                it += 1;
                string t = "";
                while (it < s.length() && (isalpha(s[it]) || s[it] == '_')) {
                    t += s[it];
                    it += 1;
                }
                for (int i = t.length() -1 ;i >= 0;i--) {
                    st.push_front(t[i]);
                }
                if (it >= s.length() || s[it] == ']') {it+=1;continue;}
                else if (s[it] == '[') {
                    continue;
                }
            }
        }
        for (auto i:st) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}