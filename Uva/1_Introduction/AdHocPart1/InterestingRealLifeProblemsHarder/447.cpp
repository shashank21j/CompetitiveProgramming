#include <bits/stdc++.h>
using namespace std;
stringstream ss;
bool valid(int i, int j) {
    if (i >= 0 && i < 20 && j >= 0 && j < 20) {
        return true;
    }
    return false;
}
int main(){
    int t;
    int n;
    int a, b;
    string inp;
    getline(cin, inp);
    ss.str("");
    ss.clear();
    ss.str(inp);
    ss >> t;
    getline(cin, inp);
    while (t--) {
        getline(cin, inp);
        string temp = "                    ";
        vector <string> grid(20, temp);
        vector <string> grid_2(20, temp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> n;
        assert (n > 0);
        getline(cin, inp);
        while (inp != "") {
            ss.str("");
            ss.clear();
            ss.str(inp);
            ss >> a >> b;
            grid[a-1][b-1] = 'O';
            getline(cin, inp);
        }

        while (n--) {
            cout << "********************" << endl;
            for (int i = 0; i< 20; i++) {
                cout << grid[i] << endl;
            }
            for (int i = 0; i < 20; i++) {
                grid_2[i] = temp;
            }
            for (int i = 0; i < 20; i++) {
                for (int j = 0; j < 20; j++) {
                    int cnt = 0;
                    for (int deltax = -1; deltax <= 1; deltax++) {
                        for (int deltay = -1; deltay <= 1; deltay++) {
                            if (deltay == 0 && deltax == 0) continue;
                            if (!valid(i + deltax, j + deltay)) continue;
                            if (grid[i + deltax][j + deltay] == 'O') cnt += 1;
                        }
                    }
                    if (grid[i][j] == ' ' && cnt == 3) {
                        grid_2[i][j] = 'O';
                    } else if (grid[i][j] == 'O' && (cnt == 2 || cnt == 3)) {
                        grid_2[i][j] = 'O';
                    } else {
                        grid_2[i][j] = ' ';
                    }
                }
            }
            for (int i = 0;i < 20; i++) {
                grid[i] = grid_2[i];
            }
        }
        cout << "********************" << endl;
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
