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

class YahtzeeScore {
    public:
	int maxPoints(vector<int> toss);
};

int YahtzeeScore::maxPoints(vector<int> toss) {
    int max=0;
    int a[7]={0};
    for (int i=0;i<toss.size();i++) { 
	a[toss[i]]++;
    }
    for (int i=1;i<7;i++) { 
	if (a[i]*i>max) max=a[i]*i;
    }	
    return max;
}
