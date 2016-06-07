#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	string s;
	while (ISTREAM>>s) {
		int row = 0,col = 0;
		char board[8][8];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				board[i][j] = '0';
			}
		}
		for (unsigned int i = 0; i < s.length(); i++) {
			if (s[i] == '/') {
				row++;
				col = 0;
			}
			else if (s[i] >= '1' && s[i] <= '8') {
				col += s[i] - 48;
			}
			else {
				board[row][col] = s[i];
				col++;
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (board[i][j] == 'p') {
					if (i<7 && j<7 && board[i+1][j+1] == '0') board[i+1][j+1] = '1';
					if (i<7 && j>0 && board[i+1][j-1] == '0') board[i+1][j-1] = '1';
				}
				if (board[i][j] == 'P') {
					if (i>0 && j<7 && board[i-1][j+1] == '0') board[i-1][j+1] = '1';
					if (i>0 && j>0 && board[i-1][j-1] == '0') board[i-1][j-1] = '1';
				}
				if (board[i][j] == 'r' || board[i][j] == 'R' || board[i][j] == 'Q' || board[i][j] == 'q') {
					for (int k = j+1; k < 8; k++) {
						if (board[i][k] != '0' && board[i][k] != '1')	break;
						board[i][k] = '1';
					}
					for (int k = j-1; k >= 0 ; k--) {
						if (board[i][k] != '0' && board[i][k] != '1')	break;
						board[i][k] = '1';
					}
					for (int k = i+1; k < 8; k++) {
						if (board[k][j] != '0' && board[k][j] != '1')	break;
						board[k][j] = '1';
					}
					for (int k = i-1; k >= 0 ; k--) {
						if (board[k][j] != '0' && board[k][j] != '1')	break;
						board[k][j] = '1';
					}
				}
				if (board[i][j] == 'n' || board[i][j] == 'N') {
					if (i-2>=0 && j-1>=0 && board[i-2][j-1] == '0') board[i-2][j-1] = '1';
					if (i-2>=0 && j+1<8 && board[i-2][j+1] == '0') board[i-2][j+1] = '1';
					if (i-1>=0 && j-2>=0 && board[i-1][j-2] == '0') board[i-1][j-2] = '1';
					if (i+1<8 && j-2>=0 && board[i+1][j-2] == '0') board[i+1][j-2] = '1';
					if (i+2<8 && j-1>=0 && board[i+2][j-1] == '0') board[i+2][j-1] = '1';
					if (i+2<8 && j+1<8 && board[i+2][j+1] == '0') board[i+2][j+1] = '1';
					if (i+1<8 && j+2<8 && board[i+1][j+2] == '0') board[i+1][j+2] = '1';
					if (i-1>=0 && j+2<8 && board[i-1][j+2] == '0') board[i-1][j+2] = '1';
				}
				if (board[i][j] == 'q' || board[i][j] == 'Q' || board[i][j] == 'b' || board[i][j] == 'B') {
					for (int k = i+1, l = j+1; k<8 && l<8; k++,l++) {
						if (board[k][l] != '0' && board[k][l] != '1') break;
						board[k][l] = '1';
					}
					for (int k = i-1, l = j-1; k>=0 && l>=0; k--,l--) {
						if (board[k][l] != '0' && board[k][l] != '1') break;
						board[k][l] = '1';
					}
					for (int k = i+1, l = j-1; k<8 && l>=0; k++,l--) {
						if (board[k][l] != '0' && board[k][l] != '1') break;
						board[k][l] = '1';
					}
					for (int k = i-1, l = j+1; k>=0 && l<8; k--,l++) {
						if (board[k][l] != '0' && board[k][l] != '1') break;
						board[k][l] = '1';
					}
				}
				if (board[i][j] == 'k' || board[i][j] == 'K') {
					if (i<7 && j<7 && board[i+1][j+1] == '0') board[i+1][j+1] = '1';
					if (i<7 && j>0 && board[i+1][j-1] == '0') board[i+1][j-1] = '1';
					if (i>0 && j<7 && board[i-1][j+1] == '0') board[i-1][j+1] = '1';
					if (i>0 && j>0 && board[i-1][j-1] == '0') board[i-1][j-1] = '1';
					if (i<7 && board[i+1][j] == '0') board[i+1][j] = '1';
					if (i-1>=0 && board[i-1][j] == '0') board[i-1][j] = '1';
					if (j<7 && board[i][j+1] == '0') board[i][j+1] = '1';
					if (j-1>=0 && board[i][j-1] == '0') board[i][j-1] = '1';
				}
			}
		}
		int cnt = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (board[i][j] == '0') {
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}