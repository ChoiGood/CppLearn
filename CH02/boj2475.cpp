#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin >> a[i];
    int total=0;
    for(int i=0;i<5; i++)
        total+=a[i]*a[i];

    cout << total%10;    
    return 0;
}