#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m; cin >> m;
    int n;  cin >> n;
    
    int m2=sqrt(m);
    int n2=sqrt(n);

    int sum=0;
    int min=10000000;
    int k;
    for(int i=m2;i<n2+1;i++) {
        k=i*i;
        if (k>=m&&k<=n){
            sum+=k;
            if (k<min)
                min=k;
        }
    }

    if (sum==0)
        printf("%d",-1);
    else
        printf("%d\n%d",sum,min);


    return 0;
}