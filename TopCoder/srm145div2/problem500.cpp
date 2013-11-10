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

class ExerciseMachine {
    public:
	int getPercentages(string time);
	int gcd (int a, int b);
};
int ExerciseMachine::getPercentages(string time) { 
    int hours=(time[0]-48)*10+(time[1]-48);
    int minutes=(time[3]-48)*10+(time[4]-48);
    int seconds = (time[6]-48)*10 +(time[7]-48);
    seconds=hours*3600 + minutes*60+ seconds;
    return gcd(seconds,100)-1;
}
int ExerciseMachine::gcd(int a,int b) { 
    if (b==0) return a;
    return gcd(b,a%b);
}
