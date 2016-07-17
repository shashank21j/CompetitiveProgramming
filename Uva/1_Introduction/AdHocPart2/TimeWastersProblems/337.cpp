#include <bits/stdc++.h>
using namespace std;

bool is_num(char c) {
    if (c > 47 && c < 58) {
        return true;
    }
    return false;
}
int main () {
    int n;
    cin >> n;
    string inp;
    getline(cin,inp);
    int idx = 0;
    while (n != 0) {
        vector < vector < char> > terminal(10, vector<char> (10, ' '));
        pair <int, int> cursor = make_pair(0, 0);
        bool insert_mode = false;
        while(n--) {
            getline(cin, inp);
            for (int i = 0; i < inp.length(); i++) {
                if (inp[i] == '^') {
                    char c = inp[i+1];
                    if (c == 'b') {
                        cursor.second = 0;
                    } else if (c == 'c') {
                        for (int j = 0;j < 10;j++) {
                            for (int k = 0; k < 10; k++) {
                                terminal[j][k] = ' ';
                            }
                        }
                    } else if (c == 'd') {
                        if (cursor.first < 9) {
                            cursor.first += 1;
                        }
                    } else if (c == 'e') {
                        for (int j = cursor.second; j < 10; j++) {
                            terminal[cursor.first][j] = ' ';
                        }
                    } else if (c == 'h') {
                        cursor = make_pair(0,0);
                    } else if (c == 'i') {
                        insert_mode = true;
                    } else if (c == 'l') {
                        if (cursor.second > 0) {
                            cursor.second -= 1;
                        }
                    } else if (c == 'o') {
                        insert_mode = false;
                    } else if (c == 'r') {
                        if (cursor.second < 9) {
                            cursor.second += 1;
                        }
                    } else if (c == 'u') {
                        if (cursor.first > 0) {
                            cursor.first -= 1;
                        }
                    } else if (c == '^') {
                        if (insert_mode) {
                            int temp = cursor.second;
                            for (int j = 9; j > temp; j--) {
                                terminal[cursor.first][j] = terminal[cursor.first][j-1];
                            }
                            terminal[cursor.first][cursor.second] = '^';
                            if (cursor.second < 9) {
                                cursor.second += 1;
                            }
                        } else {
                            terminal[cursor.first][cursor.second] = '^';
                            if (cursor.second < 9) {
                                cursor.second += 1;
                            }
                        }
                    } else if (is_num(c)) {
                        char d = inp[i + 2];
                        cursor.first = c - 48;
                        cursor.second = d - 48;
                        i += 1;
                    }
                    i += 1;
                } else {
                    if (insert_mode) {
                        int temp = cursor.second;
                        for (int j = 9; j > temp; j--) {
                            terminal[cursor.first][j] = terminal[cursor.first][j-1];
                        }
                        terminal[cursor.first][cursor.second] = inp[i];
                    } else {
                        terminal[cursor.first][cursor.second] = inp[i];
                    }
                    if (cursor.second < 9) {
                        cursor.second += 1;
                    }
                }
            }
        }
        cout<<"Case "<<++idx<<endl;
        cout<<"+----------+"<<endl;
        for (int i = 0;i < 10; i++) {
            cout<<'|';
            for (int j = 0;j < 10; j++) {
                cout<<terminal[i][j];
            }
            cout<<'|'<<endl;
        }
        cout<<"+----------+"<<endl;
        cin >> n;
        getline(cin,inp);
    }
    return 0;
}
