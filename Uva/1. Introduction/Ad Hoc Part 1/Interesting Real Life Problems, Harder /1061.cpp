#include <bits/stdc++.h>
using namespace std;


int parity(string a) {
    if (a[a.length() - 1] == '+') {
        return 1;
    }
    else if (a[a.length() - 1] == '-') {
        return -1;
    }
}
string stripl(string a) {
    string res = "";
    for (int i = 0;i<a.length()-1;i++) {
        res+=a[i];
    }
    return res;
}

int value (string s) {
    if (s == "O") {
        return 0;
    }
    else if (s == "AB") {
        return 1;
    }
    else if (s == "B") {
        return 2;
    }
    else if (s == "A") {
        return 3;
    }
}
bool myfun (string s1, string s2) {
    string ss1 = stripl(s1);
    string ss2 = stripl(s2);
    if (ss1 == ss2) return s1 > s2;
    else return value(ss1) < value(ss2);
}
int main () {
    string a,b,c;
    int cnt = 1;
    while (1) {
        cin>>a>>b>>c;
        if (a == "E" && b == "N" && c == "D") {
            break;
        }
        cout<<"Case "<<cnt++<<": ";
        set <string> child[2];
        int aparity;
        int bparity;
        set <string> parent;
        if (a != "?" && b != "?") {
            aparity = parity(a);
            bparity = parity(b);
            a = stripl(a);
            b = stripl(b);
            vector <string> temp;
            temp.push_back(a);
            temp.push_back(b);
            for (int i = 0;i<2;i++) {
                string a1 = temp[i];
                if (a1 == "AB") {
                    child[i].insert("A");
                    child[i].insert("B");
                }
                else if (a1 == "A") {
                    child[i].insert("A");
                    child[i].insert("O");
                }
                else if (a1 == "B") {
                    child[i].insert("B");
                    child[i].insert("O");
                }
                else if (a1 == "O") {
                    child[i].insert("O");
                }
            }
            set<string> chld;
            vector <string> vc1;
            vector <string> vc2;
            for (auto i:child[0]) {
                vc1.push_back(i);
            }
            for (auto i:child[1]) {
                vc2.push_back(i);
            }
            for (int i = 0;i<vc1.size();i++) {
                for (int j = 0;j<vc2.size();j++) {
                    string s1 = vc1[i];
                    string s2 = vc2[j];
                    if (s1 > s2) {
                        string t = s1;
                        s1 = s2;
                        s2 = t;
                    }
                    string s = s1 + s2;
                    if (s == "AO" || s == "AA") {
                        if (aparity == -1 && bparity == -1) {
                            chld.insert("A-");
                        }
                        else {
                            chld.insert("A-");
                            chld.insert("A+");
                        }
                    }
                    else if (s == "BO" || s== "BB") {
                        if (aparity == -1 && bparity == -1) {
                            chld.insert("B-");
                        }
                        else {
                            chld.insert("B-");
                            chld.insert("B+");
                        }
                    }
                    else if (s == "AB") {
                        if (aparity == -1 && bparity == -1) {
                            chld.insert("AB-");
                        }
                        else {
                            chld.insert("AB-");
                            chld.insert("AB+");
                        }
                    }
                    else if (s == "OO") {
                        if (aparity == -1 && bparity == -1) {
                            chld.insert("O-");
                        }
                        else {
                            chld.insert("O-");
                            chld.insert("O+");
                        }
                    }
                }
            }

            cout<<a<<((aparity == 1)?"+ ":"- ");
            cout<<b<<((bparity == 1)?"+ ":"- ");


            vector <string> res;
            for (auto i:chld) {
                res.push_back(i);
            }
            sort(res.begin(), res.end(),myfun);
            if (res.size() == 1) {
                cout<<res[0];
            }
            else {
                cout<<"{";
                for (int i = 0;i<res.size();i++) {
                    cout<<res[i];
                    if (i < res.size() - 1) {
                        cout<<", ";
                    }
                }
                cout<<"}";
            }
            cout<<endl;
        }
        else {
            bool impossible = false;
            string imp = a=="?"?b:a;
            int cparity = parity(c);
            int impparity = parity(imp);
            imp = stripl(imp);
            c = stripl(c);
            if (c == "A") {
                if (imp == "B") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("A+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("A+");
                        parent.insert("AB+");
                        parent.insert("AB-");
                        parent.insert("A-");
                    }
                }
                else if (imp == "AB" || imp == "A") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("A+");
                        parent.insert("AB+");
                        parent.insert("O+");
                        parent.insert("B+");
                    }
                    else {
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("A+");
                        parent.insert("AB+");
                        parent.insert("AB-");
                        parent.insert("A-");
                        parent.insert("O+");
                        parent.insert("O-");
                    }
                }
                else if (imp == "O") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("A+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("A+");
                        parent.insert("A-");
                        parent.insert("AB+");
                        parent.insert("AB-");
                    }
                }
            }
            else if (c == "O") {
                if (imp == "AB") {
                    impossible = true;
                }
                else if (imp == "O") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("A+");
                        parent.insert("O+");
                    }
                    else {
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("A-");
                        parent.insert("A+");
                        parent.insert("O+");
                        parent.insert("O-");
                    }
                }
                else if (imp == "A" || imp == "B") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("O+");
                        parent.insert("A+");
                        parent.insert("B+");
                    }
                    else {
                        parent.insert("O+");
                        parent.insert("O-");
                        parent.insert("A+");
                        parent.insert("B+");
                        parent.insert("A-");
                        parent.insert("B-");
                    }
                }
            }
            else if (c == "B") {
                if (imp == "A") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("AB+");
                        parent.insert("AB-");
                        parent.insert("B+");
                        parent.insert("B-");
                    }
                }
                else if (imp == "AB" || imp == "B" ) {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("A+");
                        parent.insert("AB+");
                        parent.insert("O+");
                    }
                    else {
                        parent.insert("A+");
                        parent.insert("A-");
                        parent.insert("AB+");
                        parent.insert("AB-");
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("O+");
                        parent.insert("O-");
                    }
                }
                else if (imp == "O") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("AB+");
                        parent.insert("AB-");
                    }
                }
            }
            else if (c == "AB") {
                if (imp == "O") {
                    impossible = true;
                }
                if (imp == "A") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("AB-");
                        parent.insert("AB+");
                    }
                }
                else if (imp == "B") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("A+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("A+");
                        parent.insert("A-");
                        parent.insert("AB-");
                        parent.insert("AB+");
                    }
                }
                else if (imp == "AB") {
                    if (cparity == 1 && impparity == -1) {
                        parent.insert("B+");
                        parent.insert("A+");
                        parent.insert("AB+");
                    }
                    else {
                        parent.insert("A+");
                        parent.insert("A-");
                        parent.insert("B+");
                        parent.insert("B-");
                        parent.insert("AB-");
                        parent.insert("AB+");
                    }
                }
            }
            if (a != "?") cout<<a<<" ";
            if (impossible == true) {
                cout<<"IMPOSSIBLE ";
                if (a == "?") cout<<b<<" ";
                cout<<c<<((cparity==1)?"+":"-");
                cout<<endl;
                continue;
            }

            vector <string> res;
            for (auto i:parent) {
                res.push_back(i);
            }
            sort(res.begin(), res.end(),myfun);
            if (res.size() == 1) cout<<res[0]<<" ";
            else {
                cout<<"{";
                for (int i = 0;i<res.size();i++) {
                    cout<<res[i];
                    if (i < res.size()-1) cout<<", ";
                }
                cout<<"} ";
            }


            if (a == "?") cout<<b<<" ";
            cout<<c<<((cparity==1)?"+":"-");
            cout<<endl;
        }
    }
    return 0;
}