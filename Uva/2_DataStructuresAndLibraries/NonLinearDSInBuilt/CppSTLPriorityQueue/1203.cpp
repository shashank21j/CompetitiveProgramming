#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    int a,b;
    priority_queue <vector <int> > arr;
    while (s!="#") {
        cin>>a>>b;
        vector <int> temp(3);
        temp[0] = -1*b;
        temp[1] = -1*a;
        temp[2] = b;
        arr.push(temp);
        cin>>s;
    }
    int k;
    cin>>k;
    for (int i = 0;i<k;i++) {
        vector <int> temp = arr.top();
        cout<<-1*temp[1]<<endl;
        temp[0] -= temp[2];
        arr.pop();
        arr.push(temp);
    }
    return 0;
}