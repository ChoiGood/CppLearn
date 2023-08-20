#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n+1,vector<int> (m+1));
    vector<vector<int>> w(n+1,vector<int> (m+1));
    vector<vector<int>> z(n+1,vector<int> (m+1));
    for (int i=1;i<=n;i++) {
        for (int j=1; j<=m;j++) {
            cin >> v[i][j];
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1; j<=m;j++) {
            cin >> w[i][j];
        }
    }

    for (int i=1;i<=n;i++) {
        for (int j=1; j<=m;j++) {
            z[i][j] = v[i][j] + w[i][j];
        }
    }

    for (int i=1;i<=n;i++) {
        for (int j=1; j<=m;j++) {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}