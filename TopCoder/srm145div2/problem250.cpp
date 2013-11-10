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
/* Head ends here */

class ImageDithering {
    public:
	int count(string dithered,vector<string> screen);
};

int ImageDithering::count(string dithered, vector <string> screen) {
    int count=0;
    for (int i=0;i<screen.size();i++) {
	for (int j=0;j<screen[i].length();j++) {
	    for (int k=0;k<dithered.length();k++) {
		if (screen[i][j]==dithered[k]) {
		    count++;
		    break;
		}
	    }
	}
    }
    return count;
}
