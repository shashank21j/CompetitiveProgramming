#include <bits/stdc++.h>
using namespace std;
int main() {
	int code;
	int quant;
	cin>>code>>quant;
	if (code == 1) printf("Total: R$ %.2f",quant*4.00);
	else if (code == 2) printf("Total: R$ %.2f",quant*4.50);
	else if (code == 3) printf("Total: R$ %.2f",quant*5.00);
	else if (code == 4) printf("Total: R$ %.2f",quant*2.00);
	else if (code == 5) printf("Total: R$ %.2f",quant*1.50);
	printf("\n");
	return 0;
}