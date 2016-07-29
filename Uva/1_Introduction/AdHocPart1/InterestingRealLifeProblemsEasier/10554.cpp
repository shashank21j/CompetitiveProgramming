#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int main() {
    string inp;
    getline(cin, inp);
    while (inp != "-") {
        double fatc = 0;
        double protienc = 0;
        double sugarc = 0;
        double starchc = 0;
        double alcoholc = 0;
        while(inp != "-") {
            ss.str("");
            ss.clear();
            ss.str(inp);
            vector <double> vals(5, 0);
            vector <char> type(5);
            for (int i = 0;i < 5; i++) {
                ss >> vals[i] >> type[i];
            }
            if (type[0] == 'C') {
                fatc += vals[0];
            } else if (type[0] == 'g') {
                vals[0] *= 9;
                fatc += vals[0];
            }
            if (type[1] == 'C') {
                protienc += vals[1];
            } else if (type[1] == 'g') {
                vals[1] *= 4;
                protienc += vals[1];
            }
            if (type[2] == 'C') {
                sugarc += vals[2];
            } else if (type[2] == 'g') {
                vals[2] *= 4;
                sugarc += vals[2];
            }
            if (type[3] == 'C') {
                starchc += vals[3];
            } else if (type[3] == 'g') {
                vals[3] *= 4;
                starchc += vals[3];
            }
            if (type[4] == 'C') {
                alcoholc += vals[4];
            } else if (type[4] == 'g') {
                vals[4] *= 7;
                alcoholc += vals[4];
            }
            int non_percent_vals = 0;
            int percent = 0;
            for (int i = 0;i<5;i++) {
                if(type[i] == '%') {
                    percent += vals[i];
                } else {
                    non_percent_vals += vals[i];
                }
            }
            double total = (double)(non_percent_vals*100)/(double)(100 - percent);
            for (int i = 0;i < 5; i++) {
                if (type[i] == '%') {
                    vals[i] = (total * vals[i])/100;
                    if (i == 0) {
                        fatc += vals[i];
                    } else if (i == 1) {
                        protienc += vals[i];
                    } else if (i == 2) {
                        sugarc += vals[i];
                    } else if (i == 3) {
                        starchc += vals[i];
                    } else if (i == 4) {
                        alcoholc += vals[i];
                    }
                }
            }
            getline(cin, inp);
        }
        cout<<round((fatc*100)/(fatc + protienc + sugarc + starchc + alcoholc))<<"%"<<endl;
        getline(cin, inp);
    }
    return 0;
}
