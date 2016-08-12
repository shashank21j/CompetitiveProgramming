#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(1){
        cin>>n;
        if(n==0) break;
        vector<vector <int> > mat(n,vector<int> (n));  // Use 2D vector whats all this will tell some day. Just remember for now:)
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }

        vector <int> row_sum(n,0);
        vector <int> col_sum(n,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                row_sum[i] += mat[i][j];
                col_sum[i] += mat[j][i];
            }
        }
        int rcnt = 0;
        int ccnt = 0;
        int rind = -1;
        int cind = -1;
        for (int i = 0;i<n;i++) {
            if (row_sum[i]%2==1) {
                rcnt++;
                rind = i;
            }
            if (col_sum[i]%2 == 1) {
                ccnt++;
                cind = i;
            }
        }
        if (rcnt == 0 && ccnt == 0) {
            cout<<"OK"<<endl;
        }
        else if (rcnt == 1 && ccnt == 1) {
            cout<<"Change bit ("<<rind+1<<","<<cind+1<<")"<<endl;
        }
        else {
            cout<<"Corrupt"<<endl;
        }
    }
}