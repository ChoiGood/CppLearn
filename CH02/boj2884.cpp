#include <iostream>
using namespace std;

void solve(int h, int m) {
    if (m>=45) {
        m=m-45;
    } else {
        h = h-1;
        if (h==-1)
            h=23;
        m = m+15;
    }
    cout << h << " " << m;

}

int main(){
    int h ,m; cin >>h; cin>>m;
    solve(h,m);


    return 0;
}