#include <bits/stdc++.h>
using namespace std;
int main() {
	std::setlocale(LC_ALL, "en_US.UTF-8");
    std::setlocale(LC_NUMERIC, "en_US");
	float money;
	cin>>money;
	float tax;
	cout<<fixed<<setprecision(2);
	if (money>4500) {
		tax = (money - 4500)*(28.0/100.0) + 270 + 80;
	}
	else if (money>3000) {
		tax = (money - 3000)*(18.0/100.0) + 80;
		
	}
	else if (money>2000) {
		tax = (money - 2000)*(8.0/100.0);
	}
	else {
		tax = 0.00;
	}
	cout<<"R$ "<<tax<<endl;
	return 0;
}