#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> negative;
	vector <int> positive;
	vector <int> zero;
	int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		if (temp<0) {
			negative.push_back(temp);
		}
		else if (temp == 0) {
			zero.push_back(temp);
		}
		else {
			positive.push_back(temp);
		}
	}
	if (positive.size() == 0) {
		int temp = negative[negative.size() - 1];
		positive.push_back(temp);
		negative.pop_back();
		temp = negative[negative.size() - 1];
		positive.push_back(temp);
		negative.pop_back();
	}
	if (negative.size()%2 == 0) {
		int temp = negative[negative.size()-1];
		negative.pop_back();
		zero.push_back(temp);
	}
	cout<<negative.size()<<" ";
	for (int i=0;i<negative.size();i++) {
		cout<<negative[i]<<" ";
	}
	cout<<endl;
	cout<<positive.size()<<" ";
	for (int i=0;i<positive.size();i++) {
		cout<<positive[i]<<" ";
	}
	cout<<endl;
	cout<<zero.size()<<" ";
	for (int i=0;i<zero.size();i++) {
		cout<<zero[i]<<" ";
	}
	cout<<endl;
	return 0;
}