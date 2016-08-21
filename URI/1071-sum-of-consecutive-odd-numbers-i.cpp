#include <bits/stdc++.h>
using namespace std;

int main() {
	std::setlocale(LC_ALL, "en_US.UTF-8");
    std::setlocale(LC_NUMERIC, "en_US");
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    int sum = 0;
    for (int i=a+1;i<b;i++) {
        if (abs(i)%2L==1) sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}