#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    for (int i = 0;i<n;i++) {
        vector <string> tictac(3);
        cin>>tictac[0];
        cin>>tictac[1];
        cin>>tictac[2];
        int xcnt = 0;
        int ocnt = 0;
        bool owin = false;
        bool xwin = false;

        for (int j = 0;j<3;j++) {
            for (int k = 0;k<3;k++) {
                if (tictac[j][k] == 'X') xcnt++;
                else if (tictac[j][k] == 'O') ocnt++;
            }
        }

        for (int j = 0;j < 3;j++) {
            char temp1 = 'X';
            char temp2 = 'O';

            bool flag = true;
            for (int k = 0;k < 3; k++) {
                if (tictac[j][k] != temp1) flag = false;
            }
            if (flag == true) xwin = true;

            flag = true;
            for (int k = 0;k < 3; k++) {
                if (tictac[j][k] != temp2) flag = false;
            }
            if (flag == true) owin = true;

            flag = true;
            for (int k = 0;k < 3; k++) {
                if (tictac[k][j] != temp1) flag = false;
            }
            if (flag == true) xwin = true;

            flag = true;
            for (int k = 0;k < 3; k++) {
                if (tictac[k][j] != temp2) flag = false;
            }
            if (flag == true) owin = true;
        }
        if (tictac[0][0] == 'X' && tictac[1][1] == 'X' && tictac[2][2] == 'X') xwin = true;
        if (tictac[0][0] == 'O' && tictac[1][1] == 'O' && tictac[2][2] == 'O') owin = true;
        if (tictac[2][0] == 'X' && tictac[1][1] == 'X' && tictac[0][2] == 'X') xwin = true;
        if (tictac[2][0] == 'O' && tictac[1][1] == 'O' && tictac[0][2] == 'O') owin = true;

        if (xwin == true && owin== true) cout<<"no"<<endl;
        else if (xwin == true && xcnt != ocnt + 1) cout<<"no"<<endl;
        else if (owin == true && xcnt != ocnt) cout<<"no"<<endl;
        else if (xcnt == ocnt || xcnt == ocnt+1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}