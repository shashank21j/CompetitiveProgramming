#include <bits/stdc++.h>

using namespace std;
long long int digisum(long long int n) {
	long long int sum = 0;
	while (n != 0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}
long long int pow (long long int a,long long int b) {
	long long int temp = 1;
	for (int i=0;i<b;i++) {
		temp*= a;
	} 
	return temp;
}
int main() {
	long long int a,b,c;
	cin>>a>>b>>c;
	int count = 0;
	vector <int> res;
	for (long long int i = 1;i<82;i++) {
		long long int temp = b*pow(i,a) + c;
		if (temp>999999999) continue;
		if (i == digisum(temp)) {
			count++;
			res.push_back(temp);
		}
	}
	cout<<count<<endl;
	if (count == 0) return 0;
	for (int i=0;i<res.size();i++) {
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}