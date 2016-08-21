#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    int n;
    int t;
    int op;
    int layers;
    cin >> m;
    while (m--) {
        cin >> n;
        layers = (n + 1)/2;
        vector <vector <long long int> > square(n, vector <long long int> (n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> square[i][j];
            }
        }
        for (int i = 0; i < layers; i++) {
            cin >> t;
            for (int j = 0; j < t; j++) {
                cin >> op;
                if (n % 2 == 1 && i == layers - 1) {
                    continue;
                }
                for (int x = i; x <= n - i - 1; x++) {
                    if (op == 1) {
                        swap(square[i][x], square[n - i - 1][x]);
                    } else if (op == 2 && x < n / 2) {
                        swap(square[i][x], square[i][n - x - 1]);
                    } else if (op == 3) {
                        swap(square[i][x], square[x][i]);
                    } else if (op == 4) {
                        swap(square[i][x], square[n - x - 1][n - i - 1]);
                    }
                }
                if (op != 4) {
                for (int x = i + 1; x < n - i - 1; x++) {
                    if (op == 1 && x < n / 2) {
                        swap(square[x][n - i - 1], square[n - x - 1][n - i - 1]);
                    } else if (op == 2) {
                        swap(square[x][n - i - 1], square[x][i]);
                    } else if (op == 3) {
                        swap(square[x][n - i - 1], square[n-i-1][x]);
                    } else if (op == 4) {
                        // continue;
                    }
                }
                }
                if (op == 2) {
                for (int x = n - i - 1; x >= i; x--) {
                    if (op == 1) {
                        // continue;
                    } else if (op == 2 && x >= n/2) {
                        swap(square[n - i - 1][x], square[n-i-1][n - x - 1]);
                    } else if (op == 3) {
                        // continue;
                    } else if (op == 4) {
                        // continue;
                    }
                }
                }
                if (op == 1 || op == 4) {
                for (int x = n-i-2; x > i; x--) {
                    if (op == 1 && x >= n/2) {
                        swap(square[x][i], square[n - x - 1][i]);
                    } else if (op == 2) {
                        // continue;
                    } else if (op == 3) {
                        // continue;
                    } else if (op == 4) {
                        swap(square[x][i], square[n - i - 1][n - x - 1]);
                    }
                }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << square[i][j];
                if (j < n-1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
