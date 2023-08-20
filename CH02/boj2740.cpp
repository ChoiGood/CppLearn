#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> matrix_t;
void VectorPro(int n,int k,int l,matrix_t a, matrix_t b, matrix_t& c)
{   
    for (int i=1;i<=n;i++){
        for(int j=1; j<=l; j++) {
            c[i][j]=0;
            for(int k1=1;k1<=k;k1++){
                c[i][j]+=a[i][k1]*b[k1][j];
            }
        }
    }
}

int main()
{
    int n,m; cin >> n >> m;
    matrix_t v(n+1,vector<int> (m+1));

    for (int i=1;i<=n;i++)
        for (int j=1; j<=m;j++)
            cin >> v[i][j];
    int k,l; cin >> k >> l;
    matrix_t w(k+1,vector<int> (l+1));
    for (int i=1;i<=k;i++)
        for (int j=1; j<=l;j++)
            cin >> w[i][j];

    
    matrix_t z(n+1,vector<int> (l+1));
   
    VectorPro(n,k,l,v,w,z);

    for (int i=1;i<=n;i++){
        for(int j=1; j<=l; j++) {
            cout << z[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}