#include <iostream>
using namespace std;

int main()
{
    int h,m; cin>>h>>m;
    int n; cin>>n;
    int ha;

    m=m+n;
    ha=m/60;
    if(ha==0) {
        cout << h <<" "<< m;
    }
    else {
        h=(h+ha)%24;
        m=m%60;
        cout << h <<" "<< m;
    }
    

    return 0;
}