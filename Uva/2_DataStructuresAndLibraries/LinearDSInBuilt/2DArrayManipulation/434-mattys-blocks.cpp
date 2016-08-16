#include <bits/stdc++.h>
using namespace std;

int count(vector <vector<int>> &arr) {
    int sum1 = 0;
    for (auto i:arr) {
        for (auto j:i) {
            sum1 += j;
        }
    }
    return sum1;
}

int main () {
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <int> arr(n);
        vector <int> brr(n);
        vector <vector <int> > grid1(n, vector<int> (n,0)); //max
        vector <vector <int> > grid2(n, vector<int> (n,0)); //min
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            grid2[i][0] = arr[i];
            for (int j = 0; j < n; j++) {
                grid1[i][j] = arr[i];
            }
        }

        for (int i = 0; i < n; i++) {
            cin >> brr[i];
            for (int j = 0; j < n; j++) {
                grid1[j][i] = min(brr[i], grid1[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            int ele = brr[i];
            int ind = -1;
            for (int j = n-1; j >= 0; j--) {
                if (grid2[j][i] == ele && ind == -1) {
                    ind = j;
                } else {
                    if (i < n-1) {
                        grid2[j][i+1] = grid2[j][i];
                    }
                    grid2[j][i] = 0;
                }
            }
        }

        // fix for the front side
        for (int i = 0; i < n; i++) {
            int ele = arr[i];
            bool flag = true;
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == ele) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < n; j++) {
                    if (grid2[i][j] == 0 && brr[j] >= ele) {
                        grid2[i][j] = ele;
                        break;
                    }
                }
            }
        }
        // fix for the right side.
        for (int i = 0; i < n; i++) {
            int ele = brr[i];
            bool flag = true;
            for (int j = n-1; j >= 0; j--) {
                if (grid2[j][i] == ele) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = n - 1; j >= 0; j--) {
                    if (grid2[j][i] == 0 && arr[j] >= ele) {
                        grid2[j][i] = ele;
                        break;
                    }
                }
            }
        }
        cout << "Matty needs at least "
        << count(grid2) <<" blocks, and can add at most "
        << count(grid1) - count(grid2) << " extra blocks." << endl;
    }
    return 0;
}
