#include <bits/stdc++.h>

using namespace std;
double find_average(multiset <int> arr) {
    double sum = 0;
    for (auto i: arr) {
        sum += (double)i;
    }
    return sum/(double)arr.size();
}
double find_average(vector <double> arr) {
    return (double)accumulate(arr.begin(), arr.end(),0)/(double)arr.size();
}
double find_sd(vector <double> arr) {
    double mean = find_average(arr);
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += (mean - arr[i])*(mean - arr[i]);
    }
    return sqrt(sum/(double)arr.size());
}
int main() {
    int t;
    int n, c;
    double class_mean;
    double standard_deviation;
    int delta;
    cout << "MAKING THE GRADE OUTPUT" << endl;
    cin>>t;
    while(t--) {
        cin>>n>>c;
        int ele;
        vector <multiset<int> > scores(n);
        vector <int> bonus(n);
        vector <int> absent(n);
        vector <double> average(n);
        vector <int> grade(n);
        for (int i = 0; i < n; i++) {
            for(int j = 0;j < c;j++) {
                cin >> ele;
                scores[i].insert(ele);
            }
            cin >> bonus[i];
            cin >> absent[i];
        }
        if (c > 2) {
            for (int i = 0;i<n;i++) {
                scores[i].erase(scores[i].begin());
            }
        }
        for (int i = 0;i < n; i++) {
            average[i] = find_average(scores[i]);
        }
        class_mean = find_average(average);
        standard_deviation = find_sd(average);
        for (int i = 0;i < n; i++) {
            average[i] += (bonus[i]/2)*3;
        }
        for (int i = 0;i < n;i++) {
            if (average[i] >= class_mean + standard_deviation) {
                grade[i] = 4;
            } else if (average[i] >= class_mean) {
                grade[i] = 3;
            } else if (average[i] >= class_mean - standard_deviation) {
                grade[i] = 2;
            } else if (average[i] < class_mean - standard_deviation) {
                grade[i] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (absent[i] == 0) {
                grade[i] = min(4, grade[i] + 1);
            } else {
                int delta = absent[i]/4;
                grade[i] = max(0, grade[i] - delta);
            }
        }
        cout << fixed <<setprecision(1)<<(double)accumulate(grade.begin(), grade.end(), 0)/(double)n<<endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
