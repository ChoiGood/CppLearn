// A ->  B
/*
    문제
    정수 A를 B로 바꾸려고 한다. 가능한 연산은 다음과 같은 두가지이다
    1. 2를 곱한다
    2. 1을 수의 가장 오른쪽에 추가한다
    A를 B로 바꾸는데 필요한 연산의 최솟값을 구해보자
*/

//Think B에서 A로 바꾼다고 생각하자 그럼
// 홀, 짝 성질을 이용해 수비게 구할 수 있다.  
//짝수일 때 2를 나누고 ,, 홀수면서 1이 붙어있을 때 빼주고 , 아닌경우는 return -1

#include <iostream>
using namespace std;

//int count=0;
/*
bool solve(int a, int b)
{
    ::count++;
    if (a>b)
        return false;
    if (a==b) 
    {
        return true;
    }
    else if (b%2==0)
    {
        b=b/2;
        solve(a,b);
    }
    else if (b%10==1) {
        b=b/10;
        solve(a,b);
    }
    else
        return false;
    
}
*/
// 시간 초과 떠서 재귀를 반복으로 바꿔주자!!
int solve(int a, int b)
{
    int count=0;
    while(true)
    {
        if (a==b) {
            return count+1;
        }
        else if (a>b) {
            return -1;
        }
        else if (b%2==0) {
            b=b/2;
            count++;
        }
        else if (b%10==1) {
            b=b/10;
            count++;
        }
        else
            return -1;
    }
}
int main()
{
    int a,b; cin >> a >> b;

    cout << solve(a,b);


    return 0;
}