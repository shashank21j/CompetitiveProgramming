#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int p=0;
	int c;
	int crime = 0;
	cin>>c;
	if (c>0 ) p+=min(c,10);
	else crime += c;
	for (int i=1;i<n;i++) {
		cin>>c;
		if (c>0) p+=min(c,10);
		else {
			if (p+c>0) p +=c;
		    else {
			 crime+= c+p;
			 p= 0;
		 }
		}
	}
	cout<<(-1)*crime<<endl;
	return 0;
}