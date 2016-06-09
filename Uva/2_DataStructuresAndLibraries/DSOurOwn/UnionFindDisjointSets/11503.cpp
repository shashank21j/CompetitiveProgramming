#include <bits/stdc++.h>
using namespace std;

string findset(string i, unordered_map <string, string> &pa) {
    if (i == pa[i]) return i;
    else {
        return pa[i] = findset(pa[i],pa);
    }
}
bool union_f(string i, string j, unordered_map <string, string> &pa) {
    return findset(i,pa) == findset(j,pa);
}

int main () {
    int t;
    int n;
    cin>>t;
    while (t--) {
        cin>>n;
        unordered_map <string,string> parent;
        unordered_map <string,int> rank;
        unordered_map <string,int> cnt;
        string a,b;
        while (n--) {
            cin>>a>>b;
            if (parent.find(a) == parent.end()) {
                parent[a] = a;
                rank[a] = 0;
                cnt[a] = 1;
            }
            if (parent.find(b) == parent.end()) {
                parent[b] = b;
                rank[b] = 0;
                cnt[b] = 1;
            }
            string t1 = findset(a,parent);
            string t2 = findset(b,parent);
            if (union_f(t1,t2,parent)) {
                printf("%d\n",cnt[findset(a,parent)]);
                continue;
            }
            if (rank[t1] > rank[t2]) {
                parent[t2] = t1;
                cnt[t1] += cnt[t2];
            }
            else {
                parent[t1] = t2;
                if (rank[t1] == rank[t2]){
                    rank[t2]++;
                }
                cnt[t2] += cnt[t1];
            }
            printf("%d\n",cnt[findset(a,parent)]);
        }
    }
    return 0;
}