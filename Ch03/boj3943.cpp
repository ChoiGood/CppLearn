//해일스톤 수열
/*
해일스톤 수열은 다음과 같이 정의한다
    1. n이 짝수라면, 2로 나눈다.
    2. n이 홀수라면, 3을 곱한 뒤 1 을 더한다

해일스톤 추측은 임의의 양의 정수 n으로 수열을 시작한다면 항상 4,2,1,4,2,1,... 로
끝난다는 추측이다. 이 문제에서는 1이 나오면 수열이 끝난 것으로 처리한다.

n이 주어졌을 때, 이 수열에서 가장 큰 값을 찾아 출력하는 프로그램을 작성하시오.

-입력
 첫째 줄에 테이스 케이스의 개수 T(1<=T<= 100,100)가 주어진다.
 다음 줄부터 T개의 줄에는 헤일스톤 스열의 시작값 n이 주어진다 (1 <= ㅜ <= 100,000)
 
 -출력
  각각의 테스트 케이스에 대해서, n으로 시작하는 헤일스톤 수열에서 가장 큰 값을 출력한다.
*/

#include <iostream>
#include <vector>

using namespace std;

long long solve(int n)
{
    long long max=0;
    if (n==1) 
    {
        max=1;
        return max;
    }
    else
    {
        max=n;
        while(true)
        {
            if(n%2==0) {
                n=n/2;
            }
            else {
                n=3*n+1;
            }

            if (n>max)
                max=n;
            if (n==1)
                return max;
        }

    }
}

//재귀로도 짜본것
int max=0; 
long long hail(int n)
{
    if (n>::max)
        ::max=n;
    if (n==1)
        return ::max;
    else if (n%2==0)
    {
        hail(n/2);
    }
    else
        hail(3*n+1);

}

int main()
{
//    vector<long long> v;
//처음에는 헤일스톤 수열을 입력해서 보여줄려고 만들었는데 생각해보니 지금 입 출력에는 필요없네용
    int n; cin >> n;
    
    int x;
    for (int i=0; i<n; i++) {
        scanf("%d",&x);
        printf("%lld\n",solve(x));
    }
    // 처음 제출할 때 cin 과 cout을 사용해 제출했다. 이 때 시간 초과 떴음!!  ㅠㅠ 반복으로 짯는데...
    // 그래서 메모리제이션을 써야하나 헀는데~~ (그 정도 문제는 아닌것 같은디..)
    // 알고보니 printf, scanf 보다 cin, cout 의 실행시간이 두 배 정도 더 길다고 합니다.....
    // c++ 언어 공부를 더 열심히 해야할 것 같네요 ?? 근데 이것도 언어 공부한ㄷ다고 되는건가?



    return 0;
}

