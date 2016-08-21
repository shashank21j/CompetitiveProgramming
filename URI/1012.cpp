#include <bits/stdc++.h>
using namespace std;
int main() {
	float a, b, c;
	cin>>a>>b>>c;
	printf("TRIANGULO: %.3f\n",0.5*a*c);
	printf("CIRCULO: %.3f\n",3.14159*c*c);
	printf("TRAPEZIO: %.3f\n",0.5*(a+b)*c);
	printf("QUADRADO: %.3f\n",b*b);
	printf("RETANGULO: %.3f\n",a*b);
	return 0;
}