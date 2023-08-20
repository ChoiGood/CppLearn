//D-day
#include <iostream>
using namespace std;

int month[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool Yearadd(int n) {
    if ((n%4==0 && n%100!=0)||n%400==0)
    {
        return true;
    }
    else 
        return false;
}

int Calday(int y, int m ,int d)
{
    int sum=0;
    for (int i=1;i<y;i++)
    {
        if(Yearadd(i))
            sum+=366;
        else
            sum+=365;
    }
    for (int i=1;i<m;i++) {
        sum+=month[i];
        if(i==2)
            if(Yearadd(y))
                sum+=1;
    }
    sum+=d-1;
    return sum;
}
int main()
{
    int y1,m1,d1,y2,m2,d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    int total_day = Calday(y2,m2,d2)-Calday(y1,m1,d1);
    
    if(Calday(y2,m2,d2)-Calday(y1+1000,m1,d1)>=0) {
        cout << "gg";
    }
    else
        cout << "D-" << total_day;

    return 0;
}