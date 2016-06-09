#include <bits/stdc++.h>
using namespace std;
int main () {
    int tt;
    cin>>tt;
    while (tt--) {
        int n,t,m;
        cin>>n>>t>>m;
        queue <pair<int,int> > left;
        queue <pair<int,int> > right;
        int ele;
        string dir;
        int ind = 0;
        for (int i = 0;i<m;i++) {
            cin>>ele>>dir;
            if (dir == "left") {
                left.push(make_pair(ind,ele));
                ind++;
            }
            else if (dir == "right") {
                right.push(make_pair(ind,ele));
                ind++;
            }
        }
        left.push(make_pair(ind++,99999999));
        right.push(make_pair(ind++,99999999));
        int tim = 0;
        int flag = 0;
        vector <pair<int,int> > res;

        while (left.size() > 1 || right.size() > 1) {
            pair <int,int> temp1 = left.front();
            pair <int,int> temp2 = right.front();
            // cout<<"time is: "<<tim<<endl;
            if (flag == 0) {
                if (left.size() == 1 || (temp1.second > temp2.second && temp1.second > tim) ) {
                    tim = max(tim,temp2.second);
                    tim += t;
                    flag ^= 1;
                }
                else {
                    tim = max(tim,temp1.second);
                    int count = 0;

                    while (left.size()!=1 && temp1.second <= tim ) {
                        left.pop();
                        count++;
                        res.push_back(make_pair(temp1.first,tim+t));
                        temp1 = left.front();
                        if (count == n) {
                            break;
                        }
                    }
                    tim += t;
                    flag ^= 1;
                }
            }
            else if (flag == 1) {
                if (right.size() == 1 || (temp2.second > temp1.second && temp2.second > tim) ) {
                    tim = max(tim,temp1.second);
                    tim += t;
                    flag ^= 1;
                }
                else {
                    tim = max(tim,temp2.second);
                    int count = 0;
                    while (right.size() != 1 && temp2.second <= tim ) {
                        right.pop();
                        count++;
                        res.push_back(make_pair(temp2.first,tim+t));
                        temp2 = right.front();
                        if (count == n) {
                            break;
                        }
                    }
                    tim += t;
                    flag ^= 1;
                }
            }
        }
        sort(res.begin(), res.end());
        for (int i = 0;i<res.size();i++) {
            cout<<res[i].second<<endl;
        }
        if (tt > 0) {
            cout<<endl;
        }
    }
    return 0;
}