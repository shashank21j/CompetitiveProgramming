#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<int,int> > students(n);
        int maxi = -1*(INT_MAX);
        int ele;
        vector <int> elements(n);
        for (int i = 0;i<n;i++) {
            cin>>ele;
            maxi = max(ele,maxi);
            students[i].first = maxi;
            students[i].second = ele;
        }
        int mini = INT_MAX;
        for (int i = n-1;i>=0;i--) {
            mini = min(students[i].second,mini);
            students[i].second = mini;
        }
        int max_diff = -1*INT_MAX;
        for (int i = 0;i<n-1;i++) {
            max_diff = max(max_diff,students[i].first - students[i+1].second);
        }
        cout<<max_diff<<endl;
    }
    return 0;
}
