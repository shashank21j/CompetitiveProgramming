#include <bits/stdc++.h>
using namespace std;

bool valid (int i,int j) {
    if (i>= 0 && i<60 && j >= 0 && j<60 ) {
        return true;
    }
    else {
        return false;
    }
}

string strip(string s) {
    string res = "";
    int i = 0;
    while (s[i] != '|') i++;
    for (int j = i+1;j<s.length()-1;j++) {
        res += s[j];
    }
    return res;
}
int main () {
    string s;
    map <char,vector<string> > dic;
    dic['A'] = {".***..","*...*.","*****.","*...*.","*...*."};
    dic['B'] = {"****..","*...*.","****..","*...*.","****.."};
    dic['C'] = {".****.","*...*.","*.....","*.....",".****."};
    dic['D'] = {"****..","*...*.","*...*.","*...*.","****.."};
    dic['E'] = {"*****.","*.....","***...","*.....","*****."};
    dic['F'] = {"*****.","*.....","***...","*.....","*....."};
    dic['G'] = {".****.","*.....","*..**.","*...*.",".***.."};
    dic['H'] = {"*...*.","*...*.","*****.","*...*.","*...*."};
    dic['I'] = {"*****.","..*...","..*...","..*...","*****."};
    dic['J'] = {"..***.","...*..","...*..","*..*..",".**..."};
    dic['K'] = {"*...*.","*..*..","***...","*..*..","*...*."};
    dic['L'] = {"*.....","*.....","*.....","*.....","*****."};
    dic['M'] = {"*...*.","**.**.","*.*.*.","*...*.","*...*."};
    dic['N'] = {"*...*.","**..*.","*.*.*.","*..**.","*...*."};
    dic['O'] = {".***..","*...*.","*...*.","*...*.",".***.."};
    dic['P'] = {"****..","*...*.","****..","*.....","*....."};
    dic['Q'] = {".***..","*...*.","*...*.","*..**.",".****."};
    dic['R'] = {"****..","*...*.","****..","*..*..","*...*."};
    dic['S'] = {".****.","*.....",".***..","....*.","****.."};
    dic['T'] = {"*****.","*.*.*.","..*...","..*...",".***.."};
    dic['U'] = {"*...*.","*...*.","*...*.","*...*.",".***.."};
    dic['V'] = {"*...*.","*...*.",".*.*..",".*.*..","..*..."};
    dic['W'] = {"*...*.","*...*.","*.*.*.","**.**.","*...*."};
    dic['X'] = {"*...*.",".*.*..","..*...",".*.*..","*...*."};
    dic['Y'] = {"*...*.",".*.*..","..*...","..*...","..*..."};
    dic['Z'] = {"*****.","...*..","..*...",".*....","*****."};
    dic[' '] = {"......","......","......","......","......"};


    while (getline(cin,s)) {
        if (s.length() == 0) {
            break;
        }
        vector <string> page(60);
        for (int i = 0;i<60;i++) {
            page[i] = "";
            for (int j = 0;j<60;j++) {
                page[i] += ".";
            }
        }
        while (s != ".EOP") {
            if (s.length() == 0) {
                break;
            }
            stringstream ss(s);
            string command;
            string print_type;
            string word;
            int row;
            int col;
            ss>>command;
            ss>>print_type;
            if (command == ".C" || command == ".L" || command == ".R") {
                ss>>row;
                row -= 1;
            }
            if (command == ".P") {
                ss>>row>>col;
                row -=1;
                col -=1;
            }
            string temp;
            getline(ss,temp);
            temp = strip(temp);
            if (command == ".C") {
                if (print_type == "C5") {
                    col = 30 - (temp.length())*3;
                }
                else if (print_type == "C1") {
                    col = 30 - (temp.length())/2;
                }
            }
            else if (command == ".L") {
                if (print_type == "C5") {
                    col = 0;
                }
                else if (print_type == "C1"){
                    col = 0;
                }
            }
            else if (command == ".R") {
                if (print_type == "C5") {
                    col = 60 - (temp.length())*6;
                }
                else if (print_type == "C1") {
                    col = 60 - temp.length();
                }
            }
            else if (command == ".P") {
            }
            if (print_type == "C5") {
                for (int i = 0; i<temp.length();i++) {
                    if (temp[i] == ' ') continue;
                    if (temp[i] == '.') continue;
                    int j = col + i*6;
                    for (int k = 0;k<5;k++) {
                        for (int l = 0;l<6;l++) {
                            if (valid(row+k,j+l) && dic[temp[i]][k][l] == '*') {
                                page[row+k][j+l] = dic[temp[i]][k][l];
                            }
                        }
                    }
                }
            }
            else if (print_type == "C1") {
                for (int i = 0;i<temp.length();i++) {
                    if (temp[i] == ' ') continue;
                    if (valid (row,col + i) ) page[row][col + i] = temp[i];
                }
            }
            getline(cin,s);
        }
        for (int i = 0;i<60;i++ ) {
           cout<<page[i]<<endl;
        }
        cout<<endl;
        for (int i = 0;i<60;i++) {
            cout<<"-";
        }
        cout<<endl<<endl;
    }
    return 0;
}