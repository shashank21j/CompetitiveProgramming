#include <bits/stdc++.h>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if (a>0 && b>0) {
		cout<<0<<" "<<a+b<<" "<<a+b<<" "<<0<<endl;
	}
	else if (a>0 && b<0){
		cout<<0<<" "<<-1*(a+abs(b))<<" "<<a+abs(b)<<" "<<0<<endl;	
	}
	else if (a<0 && b>0) {
		cout<<-1*(abs(a)+b)<<" "<<0<<" "<<0<<" "<<abs(a) + b<<endl;
	}
	else {
		cout<<-1*(abs(a)+abs(b))<<" "<<0<<" "<<0<<" "<<-1*(abs(a) + abs(b))<<endl;
	}
	return 0;
}