#include <bits/stdc++.h>
using namespace std;
stringstream ss;

int hexa(char c) {
    if (c >= 48 && c <= 57) {
        return c - 48;
    } else {
        return c - 55;
    }
}

int binary_to_decimal(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res *= 2;
        if (s[i] == '1') {
            res += 1;
        }
    }
    return res;
}

string binary(int n) {
    string s = "0000";
    int i = 3;
    while (n != 0) {
        s[i--] = (char)(n%2 + 48);
        n /= 2;
    }
    return s;
}
string hex_to_binary(char c) {
    int n = hexa(c);
    return binary(n);
}
string int_to_str(int num) {
    if (num == 0) {
        return "0";
    }
    string res = "";
    while (num != 0) {
        res += (char)((num % 10) + 48);
        num /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string find_op(string s) {
    string op = "";
    op += s[0];
    op += s[1];
    string res = "";
    if (op == "00") {
        res += 'R';
    } else if (op == "01") {
        res += "$";
    } else if (op == "10") {
        res += "PC+";
    } else if (op == "11") {
        res += "";
    }
    string news = "";
    for (int i = 2; i < 16; i++) {
        news += s[i];
    }
    int k = binary_to_decimal(news);
    return res + int_to_str(k);
}
int main () {
    string inp = "";
    string s;
    string b_temp;
    string op1, op2, op3;
    while(cin >> s) {
        inp += s;
    }

    int i = 0;
    while (i < inp.length()) {
        switch (inp[i]) {
            case '0':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);
                cout<<"ADD "<<op1<<","<<op2<<endl;
                break;
            case '1':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);
                cout<<"SUB "<<op1<<","<<op2<<endl;
                break;
            case '2':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);
                cout<<"MUL "<<op1<<","<<op2<<endl;
                break;
            case '3':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);
                cout<<"DIV "<<op1<<","<<op2<<endl;
                break;
            case '4':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);
                cout<<"MOV "<<op1<<","<<op2<<endl;
                break;
            case '5':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BREQ "<<op1<<endl;
                break;
            case '6':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BRLE "<<op1<<endl;
                break;
            case '7':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BRLS "<<op1<<endl;
                break;
            case '8':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BRGE "<<op1<<endl;
                break;
            case '9':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BRGR "<<op1<<endl;
                break;
            case 'A':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BRNE "<<op1<<endl;
                break;
            case 'B':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout<<"BR "<<op1<<endl;
                break;
            case 'C':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op3 = find_op(b_temp);
                cout << "AND "<< op1 << "," << op2 << "," << op3 << endl;
                break;
            case 'D':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op3 = find_op(b_temp);
                cout << "OR "<< op1 << "," << op2 << "," << op3 << endl;
                break;
            case 'E':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op2 = find_op(b_temp);

                b_temp = "";
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op3 = find_op(b_temp);
                cout << "XOR "<< op1 << "," << op2 << "," << op3 << endl;
                break;
            case 'F':
                b_temp = "";
                i += 1;
                for (int j = 0; j< 4; j++) {
                    b_temp += hex_to_binary(inp[i]);
                    i += 1;
                }
                op1 = find_op(b_temp);
                cout << "NOT "<<op1<<endl;
                break;
        }
    }
    return 0;
}
