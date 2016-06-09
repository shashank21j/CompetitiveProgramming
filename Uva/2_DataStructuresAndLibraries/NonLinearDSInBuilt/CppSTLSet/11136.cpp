#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    long long int ele;
    int n1;
    multiset<long long int>::iterator it;
    while (n!=0) {
        long long int cost = 0;
        multiset <long long int> cont;
        for (int i = 0;i<n;i++) {
            cin>>n1;
            for (int j = 0;j<n1;j++) {
                cin>>ele;
                cont.insert(ele);
            }
            cost += *cont.rbegin() - *cont.begin();
            it = cont.begin();
            cont.erase(it);
            it = cont.end();
            it--;
            cont.erase(it);
        }
        cout<<cost<<endl;
        cin>>n;
    }
    return 0;
}