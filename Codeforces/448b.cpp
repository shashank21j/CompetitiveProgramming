#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	string t;
	cin>>s>>t;
	vector<char> arr(s.length());
	vector<char> brr(t.length());
	int ha[26] = {0};
	int hb[26] = {0};
	for (int i = 0;i < s.length();i++) {
		arr[i] = s[i];
		ha[arr[i]-'a']++;
	}
	for (int i = 0;i < t.length();i++) {
		brr[i] = t[i];
		hb[brr[i]-'a']++;
	}
	sort(arr.begin(), arr.end());
	sort(brr.begin(), brr.end());
	int possible_array = 0;
	if (s.length()<t.length()) {
		cout<<"need tree"<<endl;
		return 0;
	}
	if (s.length() == t.length()) {
		possible_array = 1;
	}

	int subset_flag = 1;
	for (int i = 0;i<26;i++) {
		if (ha[i] < hb[i]) {
			subset_flag = 0;
			break;
		}
	}
	if (subset_flag == 1 && possible_array == 1) {
		cout<<"array"<<endl;
		return 0;
	}
	int id = 0;
	int substring_flag = 0;
	for (int i = 0;i<t.length();i++) {
		while (id<s.length() && s[id]!= t[i]) id++;
		if (s[id] == t[i])	{
			substring_flag++;
			id++;
		}
	}
	if (substring_flag == t.length()) {
		cout<<"automaton"<<endl;
		return 0;
	}
	if (subset_flag== 1 ) cout<<"both"<<endl;
	else {
		cout<<"need tree"<<endl;
	}
	return 0;
}