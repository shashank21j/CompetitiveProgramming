#include "bits/stdc++.h"
using namespace std;
int main() {
	int k,q,q2;
	while(scanf("%d",&k)!=EOF) {
		scanf("%d %d",&q,&q2);
		int k_i, q_i, q2_i, k_j, q_j, q2_j;
		if (k == q) {
			cout<<"Illegal state"<<endl;
			continue;
		}
		q_i = q/8;
		q_j = q%8;
		q2_i = q2/8;
		q2_j = q2%8;
		k_i = k/8;
		k_j = k%8;

		if ((q_i != q2_i && q_j != q2_j) || (q == q2)){
			cout<<"Illegal move"<<endl;	
			continue;
		}

		if (q_i == q2_i && q_i == k_i)  {
			if (q_j <= k_j && k_j <= q2_j) {
				cout<<"Illegal move"<<endl;
				continue;
			}
			else if (q2_j <= k_j && k_j <= q_j) {
				cout<<"Illegal move"<<endl;
				continue;
			}
		}
		else if (q_j == q2_j && q_j==k_j) {
			if (q_i <= k_i && k_i <= q2_i) {
				cout<<"Illegal move"<<endl;
				continue;
			}
			else if (q2_i <= k_i && k_i <= q_i) {
				cout<<"Illegal move"<<endl;
				continue;
			}	
		}
		if (((q2_i == k_i -1 || q2_i == k_i + 1) && q2_j == k_j) || ((q2_j == k_j -1 || q2_j == k_j + 1) && q2_i == k_i)) {
			cout<<"Move not allowed"<<endl;
			continue;
		}
		int arr[8][8];
		for (int i = 0;i<8;i++) {
			for (int j = 0;j<8;j++) {
				arr[i][j] = 0;
			}
		}
		for (int i = 0;i < 8; i++) {
			arr[i][q2_j] = 1;
			arr[q2_i][i] = 1;
		}
		if ((k_j >0 && arr[k_i][k_j-1] == 0) || (k_j < 7 && arr[k_i][k_j +1]== 0) || (k_i >0 && arr[k_i - 1][k_j] == 0) || (k_i<7 && arr[k_i+1][k_j] == 0)) {
			cout<<"Continue"<<endl;
		}
		else {
			cout<<"Stop"<<endl;
		}
	}
	return 0;
}