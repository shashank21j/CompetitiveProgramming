#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	vector <int> cards(52);
	vector <int> girl(3);
	vector <int> boy(2);
	while (1) {
		for (int i = 0; i < 52; i++) {
			cards[i] = 0;
		}
		for (int i = 0; i < 3; i++) {
			ISTREAM>>girl[i];
			if (girl[0] == 0) break;
			cards[girl[i]-1] = 1;
		}
		if (girl[0] == 0) break;
		ISTREAM>>boy[0];
		ISTREAM>>boy[1];
		cards[boy[0]-1] = 1;
		cards[boy[1]-1] = 1;
		sort(girl.rbegin(), girl.rend());
		sort(boy.rbegin(), boy.rend());
		int flag = 0;
		if ( boy[1] > girl[0] ) {
			for (int i = 0; i < 52; i++) {
				if (cards[i] == 0) {
					flag = 1;
					cout<<i+1<<endl;
					break;
				}
			}
		}
		else if (boy[0]>girl[0] ){
			if ((boy[1]<girl[2]) || (boy[1]<girl[1] && boy[1]>girl[2] )) {
				for (int i=girl[0];i<52;i++) {
					if (cards[i] == 0) {
						flag =1;
						cout<<i+1<<endl;
						break;
					}
				}
			}
			else if (boy[1]>girl[1]) {
				for (int i=girl[1];i<52;i++) {
					if (cards[i] == 0) {
						flag =1;
						cout<<i+1<<endl;
						break;
					}
				}	
			}
		}
		else if (boy[0]<girl[0] ){
			if (boy[1]>girl[1])
			for (int i=girl[1];i<52;i++) {
				if (cards[i] == 0) {
					flag =1;
					cout<<i+1<<endl;
					break;
				}
			}	
		}
		if (flag == 0)  cout<<"-1"<<endl;
	}
	return 0;
}