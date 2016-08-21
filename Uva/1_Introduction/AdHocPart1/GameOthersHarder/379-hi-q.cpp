#include <bits/stdc++.h>
using namespace std;
bool valid(int i, int j) {
    if (i >= 0 && i<7 && j >= 0 && j<7) {
        return true;
    }
    else {
        return false;
    }
}
int main () {
    int n;
    cin>>n;
    cout<<"HI Q OUTPUT"<<endl;
    while(n--) {
        vector<int> input;
        int ele;
        cin>>ele;
        while(ele!=0) {
            input.push_back(ele);
            cin>>ele;
        }
        int res = 0;
        if (input.size() == 0 ) {
            cout<<res<<endl;
            continue;
        }
        int arr[7][7] = {
            { 0, 0, 1, 2, 3, 0, 0},
            { 0, 0, 4, 5, 6, 0, 0},
            { 7, 8, 9,10,11,12,13},
            {14,15,16,17,18,19,20},
            {21,22,23,24,25,26,27},
            { 0, 0,28,29,30, 0, 0},
            { 0, 0,31,32,33, 0, 0}
        };
        int brr[7][7];
        map <int, pair<int,int> > dic;
        for (int i = 0;i<7;i++) {
            for (int j = 0;j<7;j++) {
                if (arr[i][j]!=0) dic[arr[i][j]] = make_pair(i,j);
            }
        }
        for (int i = 0;i<7;i++) {
            for (int j = 0;j<7;j++) {
                brr[i][j] = 0;
            }
        }
        for (int i = 0;i<input.size();i++) {
            brr[dic[input[i]].first][dic[input[i]].second] = 1;
        }


        while (1) {
            vector <pair<int,int> > moves;
            map <pair<int,int>,int >  temp;
            for (int a = 0;a<input.size();a++) {
                int t = input[a];
                int i = dic[t].first;
                int j = dic[t].second;
                if (valid(i-1,j) && arr[i-1][j] != 0 && brr[i-1][j] == 1 && valid(i-2,j) && arr[i-2][j] != 0 && brr[i-2][j] == 0) {
                    moves.push_back(make_pair(arr[i-2][j],t));
                    temp[make_pair(arr[i-2][j],t)] = arr[i-1][j];
                }
                if (valid(i+1,j) && arr[i+1][j] != 0 && brr[i+1][j] == 1 && valid(i+2,j) && arr[i+2][j] != 0 && brr[i+2][j] == 0) {
                    moves.push_back(make_pair(arr[i+2][j],t));
                    temp[make_pair(arr[i+2][j],t)] = arr[i+1][j];
                }
                if (valid(i,j+1) && arr[i][j+1] != 0 && brr[i][j+1] == 1 && valid(i,j+2) && arr[i][j+2] != 0 && brr[i][j+2] == 0) {
                    moves.push_back(make_pair(arr[i][j+2],t));
                    temp[make_pair(arr[i][j+2],t)] = arr[i][j+1];
                }
                if (valid(i,j-1) && arr[i][j-1] != 0 && brr[i][j-1] == 1 && valid(i,j-2) && arr[i][j-2] != 0 && brr[i][j-2] == 0) {
                    moves.push_back(make_pair(arr[i][j-2],t));
                    temp[make_pair(arr[i][j-2],t)] = arr[i][j-1];
                }
            }
            if (moves.size() == 0) {
                for (int i = 0;i<input.size();i++) {
                    res += input[i];
                }
                break;
            }
            sort(moves.rbegin(), moves.rend());
            int target = moves[0].first;
            int source = moves[0].second;
            int intermediate = temp[moves[0]];
            input.erase(find(input.begin(), input.end(), source));
            input.erase(find(input.begin(), input.end(), intermediate));
            input.push_back(target);

            brr[dic[target].first][dic[target].second] = 1;
            brr[dic[intermediate].first][dic[intermediate].second] = 0;
            brr[dic[source].first][dic[source].second] = 0;

        }
        cout<<res<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}