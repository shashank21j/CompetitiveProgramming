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
class CCipher {
    public:
	string decode (string cipherText, int shift);
};

string CCipher::decode(string CipherText, int shift) {
    shift%=26;
    for (int i=0;i<CipherText.length();i++ ) {
	char t=(CipherText[i]-65-shift)%26;
	if (t<0) t=26+t;
	CipherText[i]=t+65;
    }
    return CipherText;
}
