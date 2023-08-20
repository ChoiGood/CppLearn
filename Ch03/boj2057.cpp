// 팩토리얼 분해
// 수학적 귀납법!! 
// n>=3 일 때  n! > (n-1)! + (n-2)! + ... + 0!   이  항상 성립한다!!
// 이걸 알고 재귀적방법을 통해 해결해보자

#include <iostream>
#include <vector>

using namespace std;

long long fact(long long n)
{
    if (n==0)
        return 1;
    else
    {   
        long long cnt=1;
        for (long long i=1;i<=n;i++) {
            cnt*=i;
        }
        return cnt;
    }
}

int main()
{   
    long long n; cin >> n;

    if(n==0) {
        cout << "NO";
        return 0;
    }

    for(long long i = 19; i>=0; i--) {
        if (n>=fact(i)) {
            n=n-fact(i);
        }
    }

    
    if(n>0)
        cout << "NO";
    else
        cout << "YES";


    return 0;
}