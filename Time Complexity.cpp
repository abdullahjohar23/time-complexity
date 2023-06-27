// Codeforces Handle: Abdullah_Johar

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /* Time Complexity with sample code */

    // 1. O(1)
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << a << " is smaller here" << endl;
    } else if (a > b) {
        cout << a << " is bigger here" << endl;
    } else {
        cout << a << " is eaual to " << b << endl;
    }

    // 2. O(N)
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout << i << ' ';
    }

    // 3. O(N+M)
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cout  << i << endl;
    }
    for (int j = 0; j < m; j++) {
        cout  << j << endl;
    }

    // 4. O(N^2)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << ' ' << j << endl;
        }
    }

    // 5. O(N*M)
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << i << ' ' << j << endl;
        }
    }

    // 6. O(N^3)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }

    // 7. O(logN)
    int n;
    cin >> n;
    for (int i = 0; i < n; i *= 2) {
        cout << i << ' ';
    }

    // 8. O(sqrt(N))
    for (int i = 1; i*i < n; i++) {
        cout  << i << ' ';
    }

    // 9. O(NlogN)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j *= 2) {
            cout << i << ' ' << j << endl;
        }
    }

    // 10. O(N^2*logn)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 1; k <= n; k*=2) {
                cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }

    return 0;
}