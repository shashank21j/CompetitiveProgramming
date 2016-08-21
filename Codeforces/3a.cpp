#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	pair <int,int> from,to;
	from.first = a[0] - 97;
	from.second = a[1] - 48;
	to.first = b[0] - 97;
	to.second = b[1] - 48;
	int h = to.first - from.first;
	int v = to.second - from.second;
	int count = 0;
	string s = "";
	while (v*h != 0) {
		count++;
		if (v<0 && h< 0) {
			s+="LD\n";
			h++;
			v++;
		}
		else if (v<0 && h>0) {
			s+="RD\n";
			v++;
			h--;
		}
		else if (v>0 && h>0) {
			s+="RU\n";
			v--;
			h--;
		}
		else if (v>0 && h<0) {
			s+="LU\n";
			v--;
			h++;
		}
	}
	while (h<0) {
		count++;
		s+="L\n";
		h++;
	}
	while (h>0) {
		count++;
		s+="R\n";
		h--;
	}
	while (v<0) {
		count++;
		s+="D\n";
		v++;
	}
	while (v>0) {
		count++;
		s+="U\n";
		v--;
	}
	cout<<count<<endl<<s;
	return 0;
}