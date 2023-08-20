#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> matrix_t;

matrix_t v;

int main() {
    int n,m; cin >> n >> m;
    v.resize(n,vector<int>(m));

    for (int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> v[i][j];
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++)
            cout << v[j][i] << " ";
        cout << endl;
    }
}