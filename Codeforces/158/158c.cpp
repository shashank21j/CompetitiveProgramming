#include<bits/stdc++.h>

using namespace std;
vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}
int main() {
	int n;
	cin>>n;
	vector <string> A;
	string cmd;
	string path;
	for (int i = 0;i<n;i++) {
		cin>>cmd;
		if (cmd == "pwd") {
			cout<<"/";
			for (int j=0 ; j<A.size(); j++) {
				cout<<A[j]<<"/";
			}
			cout<<endl;
		}
		else if (cmd == "cd") {
			cin>>path;
			vector <string> tokens = split(path,'/');
			if (tokens[0].empty()) {
				A.erase(A.begin(),A.end());
			}
			for (int j=0;j<tokens.size();j++) {
				if (tokens[j] == ".." && A.size() > 0 ) {
					A.pop_back();
				}
				else if (!tokens[j].empty()){
					A.push_back(tokens[j]);
				}
			}
		}
	}
	return 0;
}