#include <bits/stdc++.h>
using namespace std;
stringstream ss;
int main() {
    int t;
    string s;
    cin >> t;
    getline(cin, s);
    multimap <string, int> finder;
    vector <vector <string> > records;
    int idx = 0;
    string dept;
    while (t--) {
        getline(cin, dept);
        while (getline(cin, s)) {
            if (s == "") {
                break;
            }
            ss.str("");
            ss.clear();
            ss.str(s);
            string c;
            vector <string> row = {dept};
            while(getline(ss, c, ',')) {
                row.push_back(c);
            }
            records.push_back(row);
            finder.insert(make_pair(row[3], idx));
            idx += 1;
        }
    }
    for (auto i:finder) {
        vector <string> temp = records[i.second];
        cout << "----------------------------------------" << endl;
        cout << temp[1] << " " << temp[2] << " " << temp[3] <<  endl;
        cout << temp[4] << endl;
        cout << "Department: " << temp[0] << endl;
        cout << "Home Phone: " << temp[5] << endl;
        cout << "Work Phone: " << temp[6] << endl;
        cout << "Campus Box: " << temp[7] << endl;
    }
    return 0;
}
