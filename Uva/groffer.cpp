#include <bits/stdc++.h>
using namespace std;

int main () {
    int ele;
    priority_queue<int> p1;
    priority_queue<int> p2;
    while (scanf("%d",&ele)!=EOF) {
        if (p1.empty() || ele < p1.top() ) {
            p1.push(ele);
        }
        else {
            p2.push(-1*ele);
        }

        if (p1.size() < p2.size() ) {
            p1.push(-1*p2.top());
            p2.pop();
        }
        else if (p1.size() - p2.size() > 1) {
            p2.push(-1*p1.top());
            p1.pop();
        }

        if (p1.size() == p2.size()) {
            printf("%f\n",(float)(p1.top() +  -1*p2.top() )/2.0);
        }
        else {
            printf("%d\n",p1.top());
        }
    }
    return 0;
}