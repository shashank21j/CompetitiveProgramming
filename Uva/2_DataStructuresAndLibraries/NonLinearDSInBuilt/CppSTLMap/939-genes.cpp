#include <bits/stdc++.h>
using namespace std;

void determine(string i, map<string, vector <string> > &parents, map<string,string> &characteristic) {
	if (characteristic.find(parents[i][0]) == characteristic.end()) {
		determine(parents[i][0], parents, characteristic);
	} 
	if (characteristic.find(parents[i][1]) == characteristic.end()) {
		determine(parents[i][1], parents, characteristic);
	} 
	if (characteristic.find(parents[i][0]) != characteristic.end()
		&& characteristic.find(parents[i][1]) != characteristic.end()) {
		if ((characteristic[parents[i][0]] == "dominant" && characteristic[parents[i][1]] == "dominant") 
			|| (characteristic[parents[i][0]] == "dominant" && characteristic[parents[i][1]] == "recessive")
			|| (characteristic[parents[i][0]] == "recessive" && characteristic[parents[i][1]] == "dominant")) {
			characteristic[i] = "dominant";
		} else if (characteristic[parents[i][0]] == "dominant"
				|| characteristic[parents[i][1]] == "dominant"
				|| (characteristic[parents[i][0]] != "non-existent"
				  && characteristic[parents[i][1]] != "non-existent")) {
			characteristic[i] = "recessive";
		} else {
			characteristic[i] = "non-existent";
		}
	}
}

string find_characteristic(string i, map<string, vector <string>> &parents, map<string,string> &characteristic) {
	if (characteristic.find(i) == characteristic.end()) {
		determine(i, parents, characteristic);
	} 
	return characteristic[i];
}

int main () {
	int n;
	cin >> n;
	string a, b;
	map <string, string> characteristic;
	map <string, vector <string> > parents;
	set <string> people;
	while (n--) {
		cin >> a >> b;
		if (b == "dominant" || b == "recessive" || b == "non-existent") {
			characteristic[a] = b;
		} else {
			parents[b].push_back(a);
			people.insert(b);
		}
		people.insert(a);
	}
	for (auto i:people) {
		cout << i << " " << find_characteristic(i, parents, characteristic) << endl;
	}
	return 0;
}