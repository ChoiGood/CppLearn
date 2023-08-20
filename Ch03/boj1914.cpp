#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void hanoi(int cl,int via,int dl,int n)
{
    if (n==1) {
        cout << cl << " " << dl << "\n";    // 너무 화가나는데 endl 에서 "\n" 으로 고치니 잘 실행되는 이유가 뭘까?
        return;
    }
    else
    {
        hanoi(cl,dl,via,n-1);
        cout << cl << " " << dl << "\n";
        hanoi(via,cl,dl,n-1);
    }
}

void LargePow(int n, int m)
{
    int data[100] ={0};
    data[99]=1; int digit=1;

    for (int k = 0; k < m; k++)
    { // m번 반복하겠다
        // 1번 곱할때 과정들
        for (int i = 99; i > 99 - digit; i--)
        {
            data[i] = data[i] * 2; // 생각해보니 밑에 과정의 코드는 2일때만 가능한거구나  -> 일반적인 것도 한번 짜보죠
        }

        for (int i = 99; i > 99 - digit; i--)
        {
            if (data[i] >= 10 && i != 99 - digit + 1)
            { // 맨 앞 자리 수 아니고 10 넘어가면    99 - digit +1가 숫자 맨앞자리의 인덱스를 나타냄
                data[i - 1]++;
                data[i] = data[i] % 10;
            }
            else if (data[i] >= 10 && i == 99 - digit + 1)
            { // 여기선 자릿수도 늘여야함
                data[i - 1]++;
                data[i] = data[i] % 10;
                digit++;
            }
        }
    }
    data[99] --;

    for (int i=99-digit+1;i<=99;i++)
    {
        cout << data[i];
    }
}

int main()
{
    int n; cin >> n;
    if (n>20) {
        LargePow(2,n);
    }
    else {
        cout << int(pow(2,n))-1 << "\n";
        hanoi(1,2,3,n);
    }
    return 0;
}