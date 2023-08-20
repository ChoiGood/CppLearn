#include <iostream>
using namespace std;

bool solve(int n)
{
    if ((n%4==0 && n%100!=0) || n%400==0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n; cin >> n;
    
    if (solve(n)) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}