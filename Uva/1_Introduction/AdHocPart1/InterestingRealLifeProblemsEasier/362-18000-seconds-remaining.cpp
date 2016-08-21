#include <bits/stdc++.h>
using namespace std;

int main () {
    std::ios::sync_with_stdio(false);
    int sz;
    cin >> sz;
    int idx = 0;
    while(sz != 0) {
        cout<<"Output for data set "<<++idx<<", "<<sz<<" bytes:"<<endl;
        int n;
        int sum_till_now = 0;
        int buffer = 0;
        int i = 0;
        int ctr = 0;
        while(sum_till_now < sz) {
            cin >> n;
            sum_till_now += n;
            buffer += n;
            i+= 1;
            if (i%5 == 0) {
                cout<<"   Time remaining: ";
                if (buffer == 0) {
                    cout<<"stalled"<<endl;
                } else {
                    cout<<ceil((double)((sz - sum_till_now)*5)/(double)buffer)<<" seconds"<<endl;;
                }
                buffer = 0;
            }
            ctr+= 1;
        }
        cout<<"Total time: "<<ctr<<" seconds"<<endl;
        cout<<endl;
        cin >> sz;
    }
    return 0;
}
