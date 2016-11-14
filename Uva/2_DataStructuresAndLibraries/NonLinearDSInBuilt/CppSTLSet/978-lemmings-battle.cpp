#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int b,sg,sb;
    multiset<int>::iterator it;
    while(t--) {
        cin>>b>>sg>>sb;
        multiset <int> green;
        multiset <int> blue;
        int ele;
        for (int i = 0;i<sg;i++) {
            cin>>ele;
            green.insert(ele);
        }
        for (int i = 0;i<sb;i++) {
            cin>>ele;
            blue.insert(ele);
        }
        while (!blue.empty() && !green.empty()) {
            vector <int> arr;
            vector <int> brr;
            for (int i = 0;i < b;i++) {
                if (green.empty() || blue.empty()) {
                    break;
                }
                int t1 = *green.rbegin();
                int t2 = *blue.rbegin();
                arr.push_back(t1);
                brr.push_back(t2);
                it = green.end();
                it--;
                green.erase(it);
                it = blue.end();
                it--;
                blue.erase(it);
            }
            for (int i = 0;i<arr.size();i++) {
                int t = min(arr[i],brr[i]);
                arr[i] -= t;
                brr[i] -= t;
            }
            for (int i = 0;i<arr.size();i++) {
                if (arr[i] != 0) {
                    green.insert(arr[i]);
                }
                if (brr[i] != 0) {
                    blue.insert(brr[i]);
                }
            }
        }
        if (green.empty() && blue.empty()) {
            cout<<"green and blue died"<<endl;
        }
        else if (blue.empty()) {
            cout<<"green wins"<<endl;
            vector <int> temp;
            for (auto i:green) {
                temp.push_back(i);
            }
            for (int i = temp.size() - 1; i >= 0;i--) {
                cout<<temp[i]<<endl;
            }
        }
        else if (green.empty()) {
            cout<<"blue wins"<<endl;
            vector <int> temp;
            for (auto i:blue) {
                temp.push_back(i);
            }
            for (int i = temp.size() - 1; i >= 0;i--) {
                cout<<temp[i]<<endl;
            }
        }
        if (t > 0) {
            cout<<endl;
        }
    }
    return 0;
}
