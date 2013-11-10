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

class Time {
    public:
	string whatTime (int time);
};

string Time::whatTime(int time) {
    string a;
    int hours=time/3600;
    time%=3600;
    int minutes=time/60;
    time%=60;
    int seconds=time;
    std::ostringstream out;
    out<<hours<<":"<<minutes<<":"<<seconds;
    a=out.str();
    return a;
}
