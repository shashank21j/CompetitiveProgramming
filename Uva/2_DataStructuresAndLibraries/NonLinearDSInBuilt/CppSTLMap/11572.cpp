#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector <int> data(n);
        map<int,int> dic;
        int maxi = 0;
        for (int i = 0; i<n;i++) {
            cin>>data[i];
        }
        int aux = 0;
        int cnt = 0;
        for (int i = 0;i<n;i++) {
            if (dic.find(data[i]) == dic.end()) {
                cnt++;
                dic[data[i]] = i;
                if (cnt > maxi) {
                    maxi = cnt;
                }
            }
            else {
                for (int j = aux;j<dic[data[i]];j++) {
                    dic.erase(data[j]);
                    cnt--;
                }
                aux = dic[data[i]] + 1;
                dic.erase(dic[data[i]]);
                dic[data[i]] = i;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
