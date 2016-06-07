#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int sheets;
    while (1) {
        if (n == 0) {
            break;
        }
        cout<<"Printing order for "<<n<<" pages:"<<endl;
        sheets = n/4 + (n%4==0?0:1);
        vector <vector <int> > book(2*sheets,vector<int> (2,0));
        for (int i = 0;i<2*sheets;i++) {
            if (i+1 > n) break;
            book[i][(i+1)&1] = i+1;
        }
        int temp = 2*sheets+1;
        for (int i = 2*sheets-1;i>=0;i--) {
            if (temp >n) break;
            book[i][i&1] = temp++;
        }
        for (int i = 0;i<book.size();i++) {
            if (book[i][0] + book[i][1] == 0) continue;
            cout<<"Sheet "<<i/2 + 1;
            if (i%2 == 0) cout<<", front: ";
            else cout<<", back : ";
            if (book[i][0] == 0) cout<<"Blank, ";
            else cout<<book[i][0]<<", ";
            if (book[i][1] == 0) cout<<"Blank\n";
            else cout<<book[i][1]<<endl;
        }
        cin>>n;
    }
    return 0;
}