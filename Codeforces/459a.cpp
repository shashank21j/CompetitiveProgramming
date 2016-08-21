#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1,y1;
	int x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if (x1 == x2) {
		cout<<x1+ y2 - y1<<" "<<y1<<" "<<x1+ y2 - y1<<" "<<y2<<endl;
	}
	else if (y1 == y2) {
		cout<<x1<<" "<<y1 + x2-x1<<" "<<x2<<" "<<y2 + x2 - x1<<endl;
	}
	else if (x2-x1 == y2 - y1) {
		cout<<x1<<" "<<y1 + (x2-x1)<<" "<<x2<<" "<<y2 - (x2 - x1)<<endl;	
	}
    else if (x2-x1 == y1 - y2) {
		cout<<x1<<" "<<y1 - (x2-x1)<<" "<<x2<<" "<<y2 + (x2 - x1)<<endl;	
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}