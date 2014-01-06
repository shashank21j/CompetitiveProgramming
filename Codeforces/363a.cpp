#include<iostream> 
#include<vector>

using namespace std;
void fun(int n){
    int godama=n/5;
    int ichdama=n%5;
    if (godama>0) cout<<"-O|";
    else cout<<"O-|";
    for (int i=0;i<ichdama;i++) cout<<"O";
    cout<<"-";
    for (int i=ichdama;i<4;i++) cout<<"O";
    cout<<endl;
}
int main (void) {
    int n;
    int i,j;
    cin>>n;
    if (n==0) {fun(0);return 0;}
    int digits[10];
    i=0;
    while(n>0) {
    	digits[i]=n%10;
	n/=10;
	i++;
    }
    n=i;
    for (j=0;j<n;j++) {
    	fun(digits[j]);
    }

	


	return 0;
}
