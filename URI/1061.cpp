#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	int d1,d2;
	int h1,m1,s1;
	int h2,m2,s2;
	string Dia;
	char colon;
	#if defined (SUBLIME)
      std::ifstream ifile("stdin.input");
    #endif
	ISTREAM>>Dia>>d1;
	ISTREAM>>h1>>colon>>m1>>colon>>s1;

	ISTREAM>>Dia>>d2;
	ISTREAM>>h2>>colon>>m2>>colon>>s2;
	int t1 = h1*3600 + m1*60 + s1;
	int t2 = h2*3600 + m2*60 + s2;
	int d = d2 - d1;
	int t = t2 - t1;
	if (t<0) {
		t+=24*3600;
		d--;
	}
	int h = t/3600;
	int m = (t%3600)/60;
	int s = (t%3600)%60;
	cout<<d<<" dia(s)"<<endl;
	cout<<h<<" hora(s)"<<endl;
	cout<<m<<" minuto(s)"<<endl;
	cout<<s<<" segundo(s)"<<endl;
	return 0;
}