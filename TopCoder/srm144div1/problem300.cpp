#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

class BinaryCode {
    public:
	vector <string> decode(string s);
};

vector <string> BinaryCode::decode(string s){
    string a=s;
    string dummy="NONE";
    vector <string> output;
    int n=s.length();
    int flag1=0;
    int flag2=0;
    if (n==1 and  s[0]=='1') {
	output.push_back(dummy);
	output.push_back(a);
	return output;
    }
    else if (n==1 and  s[0]=='0') {
	output.push_back(a);
	output.push_back(dummy);
	return output;
    }
    else if (n==1) {
	output.push_back(dummy);
	output.push_back(dummy);
	return output;
    }
    a[0]='0';
    a[1]=s[0]-a[0]+48;
    for (int i=2;i<n;i++){
	a[i]=s[i-1]-(a[i-1]+a[i-2])+96;
    }
    if (s[n-1]!=(a[n-1]+a[n-2])-48) flag1++;
    for (int i=0;i<n;i++) {
	if (a[i]!='0' && a[i]!='1') {
	    flag1++;
	    break;
	}

    }
    if (flag1==0) output.push_back(a);
    else output.push_back(dummy);
    a[0]='1';
    a[1]=s[0]-a[0]+48;
    for (int i=2;i<n;i++) {
	a[i]=s[i-1]-(a[i-1]+a[i-2])+96;
    }
    if (s[n-1]!=(a[n-1]+a[n-2])-48) flag2++;
    for (int i=0;i<n;i++) {
	if (a[i]!='0' && a[i]!='1') {
	    flag2++;
	    break;
	}
    }
    if (flag2==0) output.push_back(a);
    else output.push_back(dummy);
    return output;
}
