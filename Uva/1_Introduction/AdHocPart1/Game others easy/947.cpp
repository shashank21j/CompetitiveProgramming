#include <bits/stdc++.h>
using namespace std;
int counter;
vector <int> arr;
int b,c;
bool comp(vector <int> brr) {
	int cnt = 0;
	int cnt2=0;
	for (int i = 0;i<brr.size();i++) {
		if (arr[i] == brr[i]) cnt2++;
	}
	vector <int> temp1(10,0);
	vector <int> temp2(10,0);
	for (int i = 0;i<arr.size();i++) {
		temp1[arr[i]]++;
	}
	for (int i = 0;i<brr.size();i++) {
		temp2[brr[i]]++;
	}
	for (int i = 0;i<temp1.size();i++) {
		cnt+= min(temp1[i],temp2[i]);
	}
	
	if (cnt == b+c && cnt2 == b) return true;
	else return false;
}

vector<vector<int>> generateK(int k, vector<vector<int>> acc)
{
    if(k == 0) return acc;
    vector<vector<int>> result;
    for(int digit = 1; digit < 10; ++digit) {
        for(int i = 0; i < acc.size(); ++i) {
            vector<int> tmp = acc[i];
            tmp.push_back(digit);
            result.push_back(tmp);
        }
    }
    return generateK(k - 1, result);
}
int main() {
	int t;
	cin>>t;
	string a;
	while(t--) {
		cin>>a>>b>>c;
		vector <int> brr;
		arr.clear();
		for (int i = 0;i<a.length();i++) {
			arr.push_back(a[i]-48);
			brr.push_back(1);
		}
		counter = 0;
		vector<vector<int>> res = generateK(arr.size(), vector<vector<int>>(1, vector<int>()));
		for(int i = 0; i < res.size(); ++i) {
		    if (comp(res[i])) counter++;
		}
		cout<<counter<<endl;
	}
	
	return 0;
}