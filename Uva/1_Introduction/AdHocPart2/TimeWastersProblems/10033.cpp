#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int main () {
    int t;
    int reg_id;
    int val;
    string s;
    getline(cin, s);
    ss.str("");
    ss.clear();
    ss.str(s);
    ss >> t;
    getline(cin, s);
    int n;
    while (t--) {
        vector < int> RAM;
        vector <int> resister(10, 0);
        getline(cin, s);
        while(s != "") {
            ss.str("");
            ss.clear();
            ss.str(s);
            ss >> n;
            RAM.push_back(n % 1000);
            getline(cin, s);
        }
        int it = 0;
        bool flag  = true;
        int itr = 0;
        while (1) {
            int instruction = RAM[it]/100;
            itr += 1;
            bool inc_flag = true;

            switch (instruction) {
                case 0:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    if (resister[val] != 0){
                        it = resister[reg_id];
                        inc_flag = false;
                    }
                    break;
                case 1:
                    if (RAM[it] == 100) {
                        flag = false;
                    }
                    break;
                case 2:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = val;
                    break;
                case 3:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = (resister[reg_id] + val) % 1000;
                    break;
                case 4:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = (resister[reg_id] * val) % 1000;
                    break;
                case 5:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = resister[val];
                    break;
                case 6:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = (resister[reg_id] + resister[val])%1000;
                    break;
                case 7:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = (resister[reg_id] * resister[val])%1000;
                    break;
                case 8:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    resister[reg_id] = RAM[resister[val]];
                    break;
                case 9:
                    reg_id = (RAM[it] % 100) / 10;
                    val = RAM[it] % 10;
                    RAM[resister[val]] = resister[reg_id];
                    break;
            }
            if (!flag) break;
            if (inc_flag) {
                it += 1;
            }
        }
        cout << itr << endl;
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
