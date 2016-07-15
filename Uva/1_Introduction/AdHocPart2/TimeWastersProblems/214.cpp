#include <bits/stdc++.h>
using namespace std;
bool op(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '@') {
        return true;
    }
    return false;
}
int main() {
    string inp;
    bool flag = true;
    while(cin >> inp) {
        if (flag == false) {
            cout << endl;
        }
        if (flag == true) {
            flag = false;
        }
        string resister = "";
        string operand = "";
        char operatorr;
        int stk = 0;
        for (int i = 0; i < inp.length(); i++) {
            if (op(inp[i])) {
                operatorr = inp[i];
                if (operatorr == '+') {
                    if (resister != "" && operand != "") {
                        cout << "A " << operand << endl;
                        operand = "";
                    } else if (resister != "" && operand == "") {
                        cout << "A $" << --stk << endl;
                    }
                } else if (operatorr == '-') {
                    if (resister != "" && operand != "") {
                        cout << "S " << operand << endl;
                        operand = "";
                    } else if (resister != "" && operand == "") {
                        cout << "N" << endl;
                        cout << "A $" << --stk << endl;
                    }
                } else if (operatorr == '/') {
                    if (resister != "" && operand != "") {
                        cout << "D " << operand <<endl;
                        operand = "";
                    } else if (resister != "" && operand == "") {
                        cout << "ST $" << stk++ << endl;
                        cout << "L $" << stk - 2 << endl;
                        cout << "D $" << stk - 1 << endl;
                        --stk;--stk;
                    }
                } else if (operatorr == '*') {
                    if (resister != "" && operand != "") {
                        cout << "M " << operand << endl;
                        operand = "";
                    } else if (resister != "" && operand == "") {
                        cout << "M $" << --stk << endl;
                    }
                } else if (operatorr == '@') {
                    if (resister != "" && operand == "") {
                        cout << "N" << endl;
                    } else if (resister != "" && operand != "") {
                        cout << "ST $" << stk++ << endl;
                        resister = operand;
                        cout << "L " << resister << endl;
                        operand = "";
                        cout << "N" <<endl;
                    }
                }
            }
            else {
                if (resister == "" && operand == "") {
                    resister = inp[i];
                    cout << "L " << resister << endl;
                } else if (resister != "" && operand == "") {
                    operand = inp[i];
                } else if (resister != "" && operand != "") {
                    cout << "ST $" << stk++ << endl;
                    resister = operand;
                    operand = inp[i];
                    cout << "L " << resister << endl;
                }
            }
        }
    }
    return 0;
}
