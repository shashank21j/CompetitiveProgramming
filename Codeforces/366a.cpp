#include<iostream>

using namespace std;

int main(void) {
    int n;
    int i;
    cin>>n;
    int a,b,c,d;
    int flag=0;
    for (i=0;i<4;i++) {
    	cin>>a>>b>>c>>d;
	if (a+c<=n) {
	    cout<<i+1<<" "<<a<<" "<<n-a<<endl;
	    flag=1;
	    break;
	}
	else if (a+d<=n) {
	    cout<<i+1<<" "<<a<<" "<<n-a<<endl;	
	    flag=1;
	    break;
	}
	else if (b+d<=n) {
	    cout<<i+1<<" "<<b<<" "<<n-b<<endl;
	    flag=1;
	    break;
	}
	else if(b+c<=n) {
	    cout<<i+1<<" "<<b<<" "<<n-b<<endl;
	    flag=1;
	    break;
	}
    }
    if (flag==0) cout<<"-1"<<endl;
    return 0;
}
