#include <bits/stdc++.h>
using namespace std;

struct classcomp {
  bool operator() (const char& lhs, const char& rhs) const
  {return 0;}
};

int main (){
    int n;
    cin >> n;
    int code, note, m, b, t;
    while (n != -1) {
        multimap < int, vector <int>, classcomp > dic;
        for (int i = 0; i < n;i++) {
            vector <int> temp;
            cin >> code >> note >> m >> b >> t;
            t = (t/30);
            if (t%2 == 1) {
                t+= 1;
            }
            t *= 30;
            if (t == 480) {
                t = 0;
                b += 1;
            }
            if (b == 5) {
                m += 1;
                b = 1;
            }
            temp.push_back(code);
            temp.push_back(m);
            temp.push_back(b);
            temp.push_back(t);
            if (code == 1) {
                dic.insert(make_pair(note, temp));
            } else {
                multimap <int, vector <int> , classcomp >::iterator it1;
                for (multimap <int, vector <int> , classcomp >::iterator it = dic.begin(); it != dic.end(); it++) {
                    if (it -> first == note) {
                        it1 = it;
                    }
                }
                vector <int> rr = it1->second;
                if (temp[1] == rr[1] && temp[2] == rr[2] && temp[3] == rr[3]) {
                    dic.erase(it1);
                } else {
                    dic.insert(make_pair(note, temp));
                }
            }
        }
        cout<<dic.size()<<endl;
        for (auto i:dic) {
            cout << i.second[0] << " " << i.first << " " << i.second[1]
            << " " << i.second[2] << " " << i.second[3] << endl;
        }
        cin >> n;
    }
    cout<<-1<<endl;
    return 0;
}
