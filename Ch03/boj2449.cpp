#include <iostream>

using namespace std;

int arr[5000][8000] = {0};

void PrintStar(int x, int y, int n)
{
    if (n==3)
    {  
        arr[x][y] = 1;
        arr[x+1][y-1] =1 ; arr[x+1][y+1] =1;
        arr[x+2][y-2] =1; arr[x+2][y-1] =1; arr[x+2][y] =1; arr[x+2][y+1] =1; arr[x+2][y+2] =1;
        return;
    }
    else
    {
        PrintStar(x,y,n/2);
        PrintStar(x+n/2,y+n/2,n/2);
        PrintStar(x+n/2,y-n/2,n/2);
    }
}


int main()
{
    int n; cin >> n;
    PrintStar(1,n,n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if (arr[i][j]==1)
                printf("*");
            else if (arr[i][j]==0)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}