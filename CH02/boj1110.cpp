#include <iostream>

using namespace std;

int digitsum(int n)
{
    int sum=0;
    while(n) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

void solve(int n)
{
    int m1,m2;
    int num=n;
    int count=0;
    while(1)
    {
        m1=num%10;
        m2=digitsum(num)%10;
        num=m1*10+m2;
        count++;
        if(num==n)
            break;
    }
    cout<<count;
}
int main() {
    int n; cin >> n;
    solve(n);

    return 0;
}