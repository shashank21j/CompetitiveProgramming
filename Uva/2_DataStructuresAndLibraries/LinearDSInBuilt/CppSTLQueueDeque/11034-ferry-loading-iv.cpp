#include <bits/stdc++.h>
using namespace std;
int main () {
    int tt;
    cin>>tt;
    while (tt--) {
        int l,m;
        cin>>l>>m;
        l*= 100;
        queue <int> left;
        queue <int> right;
        int ele;
        string dir;
        for (int i = 0;i<m;i++) {
            cin>>ele>>dir;
            if (dir == "left") {
                left.push(ele);
            }
            else if (dir == "right") {
                right.push(ele);
            }
        }
        left.push(99999999);
        right.push(99999999);
        int flag = 0;
        int count = 0;
        while (left.size() > 1 || right.size() > 1) {
            int len = l;
            if (flag == 0) {
                while (left.size()!=1 && left.front() <= len ) {
                    len -= left.front();
                    left.pop();
                }
                count++;
                flag ^= 1;
            }
            else if (flag == 1) {
                while (right.size() != 1 && right.front() <= len ) {
                    len -= right.front();
                    right.pop();
                }
                count++;
                flag ^= 1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}