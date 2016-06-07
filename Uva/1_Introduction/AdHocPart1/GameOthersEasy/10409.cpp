#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(1) {
		cin>>n;
		if (n == 0) break;
		int top = 1;
		int north = 2;
		int west = 3;
		int south = 5;
		int east = 4;
		int bottom = 6;
		int top1,north1,west1,south1,east1,bottom1;
		string temp;
		while(n--) {
			cin>>temp;
			if (temp == "north") {
				top1 = south;
				north1 = top;
				south1 = bottom;
				bottom1 = north;
				east1 = east;
				west1 = west;
			}
			else if (temp == "east") {
				top1 = west;
				north1 = north;
				south1 = south;
				bottom1 = east;
				east1 = top;
				west1 = bottom;
			}
			else if (temp == "south") {
				top1 = north;
				north1 = bottom;
				south1 = top;
				bottom1 = south;
				east1 = east;
				west1 = west;
			}
			else if (temp == "west") {
				top1 = east;
				north1 = north;
				south1 = south;
				bottom1 = west;
				east1 = bottom;
				west1 = top;
			}
			north = north1;
			south = south1;
			east = east1;
			west = west1;
			top = top1;
			bottom = bottom1;
		}
		cout<<top<<endl;
	}
	return 0;
}