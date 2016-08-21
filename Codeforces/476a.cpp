#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int numMoves = n/2 + (int)(n%2!=0);
	int minMoves = (numMoves/m + (int)(numMoves%m != 0))*m;

	if (minMoves>=numMoves && minMoves <= n) {
		cout<<minMoves<<endl;
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}