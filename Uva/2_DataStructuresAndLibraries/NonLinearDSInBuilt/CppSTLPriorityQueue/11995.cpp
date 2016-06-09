#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    while (cin>>n) {
        stack<int> st;
        queue<int> que;
        priority_queue <int> pq;
        int type,ele;
        bool st_flag = true;
        bool que_flag = true;
        bool pq_flag = true;
        for (int i = 0; i < n; i++) {
            cin>>type>>ele;
            if (type == 1) {
                st.push(ele);
                que.push(ele);
                pq.push(ele);
            }
            else if (type == 2) {
                if (st.empty()) {
                    st_flag = false;
                    que_flag = false;
                    pq_flag = false;
                    continue;
                }
                int t1 = st.top();
                int t2 = que.front();
                int t3 = pq.top();
                if (ele != t1) {
                    st_flag = false;
                }
                if (ele != t2) {
                    que_flag = false;
                }
                if (ele != t3) {
                    pq_flag = false;
                }
                st.pop();que.pop();pq.pop();
            }
        }
        if (!st_flag && !que_flag && !pq_flag) {
            cout<<"impossible"<<endl;
        }
        else if (st_flag && !que_flag && !pq_flag) {
            cout<<"stack"<<endl;
        }
        else if (que_flag && !st_flag && !pq_flag) {
            cout<<"queue"<<endl;
        }
        else if (pq_flag && !st_flag && !que_flag) {
            cout<<"priority queue"<<endl;
        }
        else {
            cout<<"not sure"<<endl;
        }
    }
    return 0;
}