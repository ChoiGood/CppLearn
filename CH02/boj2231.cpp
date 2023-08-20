#include <iostream>
using namespace std;

int digitsum(int n) {
    int sum=0;
    while(n) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}


void solve(int n)
{
    for (int i=1;i<=n;i++){
        if ((i+digitsum(i))==n){
            cout << i;
            return;
        }
    }
    cout << 0;
}

int main()
{
    int n; cin >> n;
    solve(n);

    return 0;
}