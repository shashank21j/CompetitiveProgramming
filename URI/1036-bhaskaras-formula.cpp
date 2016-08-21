#include <bits/stdc++.h>
using namespace std;
int main() {
	double a,b,c;
	cin>>a>>b>>c;
	double d = b*b - 4*a*c;
	if (d<0) {
		cout<<"Impossivel calcular"<<endl;
		return 0;
	}
	double r2 = -b + sqrt(d);
	double r1 = -b - sqrt(d);
	if (r1 != 0 && r2 != 0) {
		printf("R1 = %.5lf\n",(2*c)/r1);
		printf("R2 = %.5lf\n",(2*c)/r2);
		return 0;
	}
	printf("Impossivel calcular\n");
	return 0;
}