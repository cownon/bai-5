#include<bits/stdc++.h>
using namespace std;

int n, d[1005][1005], res = 0, m;
long a[1005][1005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            d[i][j] = 0;
        }
    }

    int tmp;

    for (int i = 1; i <= n; i++) {
        tmp = 0;
        for (int j = 1; j <= m; j++) {
            if (a[i][j] > tmp) {
                d[i][j] = 1;
                tmp = a[i][j];
            }
        }
    }

    for (int j = 1; j <= m; j++) {
        tmp = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i][j] > tmp) {
                d[i][j] = 1;
                tmp = a[i][j];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        tmp = 0;
        for (int j = m; j >= 1; j--) {
            if (a[i][j] > tmp) {
                d[i][j] = 1;
                tmp = a[i][j];
            }
        }
    }

    for (int j = 1; j <= m; j++) {
        tmp = 0;
        for (int i = n; i >= 1; i--) {
            if (a[i][j] > tmp) {
                d[i][j] = 1;
                tmp = a[i][j];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            res += d[i][j];
        }
    }

    cout << res;

    return 0;
}
