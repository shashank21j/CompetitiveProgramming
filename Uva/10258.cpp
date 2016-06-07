#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string s;
    getchar();
    getline(cin,s);
    int c,p,t;
    char d;
    bool flag = true;
    while(n--) {
        vector < vector<int> > score(101,vector<int> (10,0));
        vector < vector<int> > time_penalty(101,vector<int> (10,0));
        vector < int > player(101,0);
        if (flag == true) {
            flag = false;
        }
        else {
            cout<<endl;
        }
        vector <vector <int> > input;
        while (1) {
            getline(cin,s);
            if (s.length() == 0) break;
            stringstream ss(s);
            ss>>c>>p>>t>>d;
            player[c] = 1;
            vector <int> tt;
            tt.push_back(t);
            tt.push_back(c);
            tt.push_back(p);
            if (d == 'I') {
                tt.push_back(-1);
            }
            else if (d == 'C') {
                tt.push_back(1);
            }
            else {
                tt.push_back(0);
            }
            input.push_back(tt);
        }
        sort(input.begin(), input.end());
        for (int i = 0;i<input.size();i++) {
            // cout<<input[i][0]<<" "<<input[i][1]<<" "<<input[i][2]<<" "<<input[i][3]<<endl;
            if (input[i][3] == 1 && score[input[i][1]][input[i][2]]!= 1) {
                score[input[i][1]][input[i][2]] = 1;
                time_penalty[input[i][1]][input[i][2]] += input[i][0];
            }
            else if (input[i][3] == -1 && score[input[i][1]][input[i][2]]!= 1) {
                time_penalty[input[i][1]][input[i][2]] += 20;
            }
        }
        vector <vector<int> > ans;
        for (int i = 0;i<101;i++) {
            int t_score = 0;
            int t_penalty = 0;
            for (int j = 0;j<10;j++) {
                if (score[i][j] == 1) {
                    t_score+=1;
                    t_penalty += time_penalty[i][j];
                }
            }
            if(player[i] == 1) {
                vector <int> temp;
                temp.push_back((-1)*t_score);
                temp.push_back(t_penalty);
                temp.push_back(i);
                ans.push_back(temp);
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0;i<ans.size();i++) {
            cout<<ans[i][2]<<" "<<(-1)*ans[i][0]<<" "<<ans[i][1]<<endl;
        }
    }
    return 0;
}