#include <bits/stdc++.h>
using namespace std;
int main () {
    int cnt = 0;
    int n,m;
    cin>>n;
    while(1) {
        if (n == 0) break;
        cin>>m;
        vector <string> crossword(n);
        for (int i = 0;i<n;i++) {
            cin>>crossword[i];
        }
        vector < vector<int> > helper(n,vector<int> (m,0));
        int counter = 0;
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                if (crossword[i][j]!= '*'&& (j == 0 || crossword[i][j-1] == '*')) {
                    counter++;
                    helper[i][j] = counter;
                }
                else if (crossword[i][j]!= '*' && (i == 0 || crossword[i-1][j] == '*')) {
                    counter++;
                    helper[i][j] = counter;
                }
            }
        }
        vector <pair <int,string> > across;
        vector <pair <int,string> > down;
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                if (crossword[i][j] != '*' && (j == 0 || crossword[i][j-1] == '*')) {
                    string s = "";
                    int temp = j;
                    while (temp < m && crossword[i][temp] != '*') {
                        s += crossword[i][temp];
                        temp++;
                    }
                    if (s.length() > 0) across.push_back(make_pair(helper[i][j],s));
                }
            }
        }
        for (int j = 0;j<m;j++) {
            for (int i = 0;i<n;i++) {
                if (crossword[i][j] != '*' && (i == 0 || crossword[i-1][j] == '*')) {
                    string s = "";
                    int temp = i;
                    while (temp < n && crossword[temp][j] != '*') {
                        s += crossword[temp][j];
                        temp++;
                    }
                    if (s.length() > 0) down.push_back(make_pair(helper[i][j],s));
                }
            }
        }
        cnt++;
        printf("puzzle #%d:\n",cnt);
        sort(down.begin(), down.end());
        printf("Across\n");
        for (int i = 0;i<across.size();i++) {
            printf(" %2d.",across[i].first);
            cout<<across[i].second<<endl;
        }
        printf("Down\n");
        for (int i=0;i<down.size();i++) {
            printf(" %2d.",down[i].first);
            cout<<down[i].second<<endl;
        }
        cin>>n;
        if (n!=0) cout<<endl;
    }
    return 0;
}