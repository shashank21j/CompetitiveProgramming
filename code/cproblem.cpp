#include<iostream>
#include<vector>
answer=-1;
using namespace std;
int n,k;
int dp(int i,vector <int> a, vector <int> b) {
    int sum=0;
    int cal=0;
    for (j=i;j<n;j++) {
    	sum+=a[i];
	cal+=b[i];
	if (sum/cal==k && sum>answer) answer=sum; 
    }
    return answer;	
}
int main(void) {
    cin>>n>>k;
    vector <int> weight;
    vector <int> calorie;
    int temp;
    for (int i=0;i<n;i++) {
    	cin>>temp;
	weight.push_back(temp);
    }
    for (int i=0;i<n;i++) {
    	cin>>temp;
	calorie.push_back(temp);
    }
    answer=dp(0,weight,calorie);
    cout<<answer<<endl;
    return 0;
}
