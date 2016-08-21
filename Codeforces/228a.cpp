#include <bits/stdc++.h>

using namespace std;

int main() {
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	set <int> test;
	test.insert(s1);
	test.insert(s2);
	test.insert(s3);
	test.insert(s4);
	cout<<4 - test.size()<<endl;
	return 0;
}