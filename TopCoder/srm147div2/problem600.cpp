#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <tuple>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class PeopleCircle {
public:
	string order(int numMales, int numFemales, int K) {
		char arr[numMales + numFemales];
		for (int i=0;i<numMales + numFemales;i++ ){
			arr[i]='M';
		}
		
		int len= numMales + numFemales;
		arr[len]='\0';
		int pos = len - 1;
		for (int i=0; i< numFemales; i++ ) {
			for (int c=0;c<K;) {
				pos = (pos+1)%len;
				if (arr[pos]=='M') c++;
			}
			arr[pos]='F';
		}
		return string(arr);
	}
	
};
