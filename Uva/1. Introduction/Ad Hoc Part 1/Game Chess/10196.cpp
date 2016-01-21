#include <bits/stdc++.h>

using namespace std;
int main () {
	string s;
	vector <string> board;
	int flag;
	int counter = 0;
	while (1) {
		counter++;
		flag = 1;
		for (int i = 0;i<8;i++) {
			cin>>s;
			board.push_back(s);
			for (int j = 0; j<8; j++) {
				if (board[i][j] != '.') flag = 0;
			}
		}
		if (flag == 1) break;
		int pB = 0;
		int pW = 0;
		for (int i = 0;i<8;i++) {
			for (int j = 0;j<8;j++) {
				if (board[i][j] == 'k') {
					if (i < 7 && j < 7 && board[i+1][j+1] == 'P') {
						pB = 1;
					}
					else if (i < 7 && j > 0 && board[i+1][j-1] == 'P') {
						pB = 1;
					}
					else if (i < 6 && j <7 && board[i+2][j+1] == 'N') {
						pB = 1;
					}
					else if (i < 6 && j > 0 && board[i+2][j-1] == 'N') {
						pB = 1;
					}
					else if (i < 7 && j < 6 && board[i+1][j+2] == 'N') {
						pB = 1;
					}
					else if (i < 7 && j > 1 && board[i+1][j-2] == 'N') {
						pB = 1;
					}
					else if (i > 1  && j > 0 && board[i-2][j-1] == 'N') {
						pB = 1;
					}
					else if (i > 1  && j < 7 && board[i-2][j+1] == 'N') {
						pB = 1;
					}
					else if (i > 0  && j < 6 && board[i-1][j+2] == 'N') {
						pB = 1;
					}
					else if (i > 0  && j > 1 && board[i-1][j-2] == 'N') {
						pB = 1;
					}
					//rooks 
					int k = 0;
					for (k = 1; i+k<8 ;k++) {
						if (board[i+k][j]!='.') break;
					}
					if (i + k <=7 && (board[i+k][j] == 'R' || board[i+k][j] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 ;k++) {
						if (board[i-k][j]!='.') break;
					}
					if (i - k >= 0 && (board[i-k][j] == 'R' || board[i-k][j] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; j-k>=0 ;k++) {
						if (board[i][j-k]!='.') break;
					}
					if (j - k >= 0 && (board[i][j-k] == 'R' || board[i][j-k] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; j+k<8 ;k++) {
						if (board[i][j+k]!='.') break;
					}
					if (j + k <=7 && (board[i][j+k] == 'R' || board[i][j+k] == 'Q')) {
						pB = 1;
					}
					//bishops
					k = 0;
					for (k = 1; i+k<8 && j+k <8 ;k++) {
						if (board[i+k][j+k]!='.') break;
					}
					if (i + k <=7 && j+k <=8 && (board[i+k][j+k] == 'B' || board[i+k][j+k] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 && j-k>= 0;k++) {
						if (board[i-k][j-k]!='.') break;
					}
					if (i - k >= 0 && j-k>=0 && (board[i-k][j-k] == 'B' || board[i-k][j-k] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; i+k <8 && j-k>=0 ;k++) {
						if (board[i+k][j-k]!='.') break;
					}
					if (j - k >= 0 && i+k<=7 && (board[i+k][j-k] == 'B' || board[i+k][j-k] == 'Q')) {
						pB = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 &&  j+k<8 ;k++) {
						if (board[i-k][j+k]!='.') break;
					}
					if (i - k >=0 && j + k<=7 && (board[i-k][j+k] == 'B' || board[i-k][j+k] == 'Q')) {
						pB = 1;
					}
					
				}
				if (board[i][j] == 'K') {
					if (i > 0 && j > 0 && board[i-1][j-1] == 'p') {
						pW = 1;
					}
					else if (i > 0 && j < 7 && board[i-1][j+1] == 'p') {
						pW = 1;
					}
					else if (i < 6 && j <7 && board[i+2][j+1] == 'n') {
						pW = 1;
					}
					else if (i < 6 && j > 0 && board[i+2][j-1] == 'n') {
						pW = 1;
					}
					else if (i < 7 && j < 6 && board[i+1][j+2] == 'n') {
						pW = 1;
					}
					else if (i < 7 && j > 1 && board[i+1][j-2] == 'n') {
						pW = 1;
					}
					else if (i > 1  && j > 0 && board[i-2][j-1] == 'n') {
						pW = 1;
					}
					else if (i > 1  && j < 7 && board[i-2][j+1] == 'n') {
						pW = 1;
					}
					else if (i > 0  && j < 6 && board[i-1][j+2] == 'n') {
						pW = 1;
					}
					else if (i > 0  && j > 1 && board[i-1][j-2] == 'n') {
						pW = 1;
					}
					//rooks 
					int k = 0;
					for (k = 1; i+k<8 ;k++) {
						if (board[i+k][j]!='.') break;
					}
					if (i + k <=7 && (board[i+k][j] == 'r' || board[i+k][j] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 ;k++) {
						if (board[i-k][j]!='.') break;
					}
					if (i - k >= 0 && (board[i-k][j] == 'r' || board[i-k][j] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; j-k>=0 ;k++) {
						if (board[i][j-k]!='.') break;
					}
					if (j - k >= 0 && (board[i][j-k] == 'r' || board[i][j-k] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; j+k<8 ;k++) {
						if (board[i][j+k]!='.') break;
					}
					if (j + k <=7 && (board[i][j+k] == 'r' || board[i][j+k] == 'q')) {
						pW = 1;
					}
					//bishops
					k = 0;
					for (k = 1; i+k<8 && j+k <8 ;k++) {
						if (board[i+k][j+k]!='.') break;
					}
					if (i + k <=7 && j+k <=8 && (board[i+k][j+k] == 'b' || board[i+k][j+k] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 && j-k>= 0;k++) {
						if (board[i-k][j-k]!='.') break;
					}
					if (i - k >= 0 && j-k>=0 && (board[i-k][j-k] == 'b' || board[i-k][j-k] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; i+k <8 && j-k>=0 ;k++) {
						if (board[i+k][j-k]!='.') break;
					}
					if (j - k >= 0 && i+k<=7 && (board[i+k][j-k] == 'b' || board[i+k][j-k] == 'q')) {
						pW = 1;
					}
					k = 0;
					for (k = 1; i-k>=0 &&  j+k<8 ;k++) {
						if (board[i-k][j+k]!='.') break;
					}
					if (i - k >=0 && j + k<=7 && (board[i-k][j+k] == 'b' || board[i-k][j+k] == 'q')) {
						pW = 1;
					}
					
				}
			}
		}
		cout<<"Game #"<<counter;
		if (pB) cout<<": black king is in check."<<endl;
		else if (pW) cout<<": white king is in check."<<endl;
		else cout<<": no king is in check."<<endl;
		board.clear();
	}
	return 0;
}