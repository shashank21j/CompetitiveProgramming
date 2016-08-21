#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	int check[] = {0,5,15,35,75,155,315,635,1275,2555,5115,10235,20475,40955,81915,163835,327675,655355,1310715,2621435,5242875,10485755,20971515,41943035,83886075,167772155,335544315,671088635,1342177275};
	string gentlemen [] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int subtract = 0;
	int i = 0;

	while ( check[i] < n ) {
		subtract = check[i];
		i++;
	}
	int num = n - subtract;
	int den = (check[i-1]/5)+1;
	int res = num/den + (int)(num%den > 0);
	cout<<gentlemen[res-1]<<endl;
	return 0;
}
