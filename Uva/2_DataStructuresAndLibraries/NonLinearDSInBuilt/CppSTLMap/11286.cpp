#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int ele;
    while (n!=0) {
        map <set<int> , int> dic;
        for (int i = 0;i<n;i++) {
            set<int> temp;
            for (int j = 0;j<5;j++) {
                cin>>ele;
                temp.insert(ele);
            }
            if (dic.find(temp) != dic.end()) {
                dic[temp] += 1;
            }
            else {
                dic[temp] = 1;
            }
        }
        int maxi = -1;
        int cnt = 0;
        for (auto i:dic) {
            if (i.second > maxi) {
                maxi = i.second;
                cnt = 1;
            }
            else if (i.second == maxi) {
                cnt++;
            }
        }
        cout<<cnt*maxi<<endl;
        cin>>n;
    }
    return 0;
}