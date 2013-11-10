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

class RectangularGrid {
    public:
	long long countRectangles(int width, int height);
	long long nc2(long long n);
};

long long RectangularGrid::countRectangles(int width, int height) {
    long long int rec=nc2(width+1)*nc2(height+1);
    if (height<width ){
	height= height + width;
	width=height-width;
	height = height-width;
    }
    long long int sq= (width*(width+1)*(3*height-width + 1))/6;
    return rec-sq;
}

long long RectangularGrid::nc2(long long n) { 
    return (n*(n-1))/2;
}
