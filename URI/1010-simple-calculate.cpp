#include <bits/stdc++.h>
using namespace std;
int main() {
	int code1, item1;
	float p1;
	int code2, item2;
	float p2;
	cin>>code1>>item1>>p1;
	cin>>code2>>item2>>p2;
	printf("VALOR A PAGAR: R$ %.2f\n", item1*p1 + item2*p2);
	return 0;
}