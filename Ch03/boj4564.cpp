#include <iostream>
#include <vector>
#include <string>
using namespace std;

int digit(int n)
{
    int mul=1;
    while(n) {
        mul*=n%10;
        n=n/10;
    }
    return mul;
}

void solve(int n) {
    cout << n << " ";
    if (n<10) {
        return ;
    }
    else {
        n=digit(n);
        solve(n);
    }

}

int main() {
    int n;

    while (true) {
        cin >> n;
        if(n==0)
            break;
        solve(n);
        cout << endl;
    }

    return 0;
}