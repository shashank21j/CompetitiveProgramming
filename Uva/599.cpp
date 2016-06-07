#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        vector <string> edges;
        cin>>s;
        while (s[0] != '*') {
            edges.push_back(s);
            cin>>s;
        }
        cin>>s;
        map <char,int> dic;
        int ind = 0;
        for(int i = 0;i<s.length();i+=2) {
            dic[s[i]] = ind;
            ind++;
        }
        vector < vector <int> > graph(ind);
        for (int i = 0;i<edges.size();i++) {
            int a = dic[edges[i][1]];
            int b = dic[edges[i][3]];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector <int> visited(ind,1);
        int akon = 0;
        int tree = 0;
        for (int i = 0;i<ind;i++) {
            if (visited[i] == 0) {
                continue;
            }
            if (graph[i].size() == 0) {
                akon++;
                visited[i] = 0;
                continue;
            }
            tree++;
            stack <int> ss;
            ss.push(i);
            visited[i] = 0;
            while (!ss.empty()) {
                int crr = ss.top();ss.pop();
                visited[crr] = 0;
                for (int j = 0;j<graph[crr].size();j++) {
                    if (visited[graph[crr][j]] != 0) {
                        ss.push(graph[crr][j]);
                    }
                }
            }
        }
        cout<<"There are "<<tree<<" tree(s) and "<<akon<<" acorn(s)."<<endl;
    }
    return 0;
}