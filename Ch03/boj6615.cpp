#include <iostream>
#include <vector>
using namespace std;

 vector<long int> a; vector<long int> b;

void collaz(vector<long int> &a, long int n)
{
    /*
    a.push_back(n);
    if (n==1) {
        return ;
    } 
    else if (n%2==0) {
        collaz(a,n/2);
    }
    else {
        collaz(a,3*n+1);
    }
    */
   while (n!=1) {
    a.emplace_back(n);
    if (n%2==0) {
        n=n/2;
    }
    else {
        n=3*n+1;
    }
   }
   a.emplace_back(1);
   return;
}

void MeetStep(vector<long int> &a,vector<long int> &b)
{
    bool flag = false;
    for (int i=0;i<a.size();i++) {
        for(int j=0;j<b.size();j++) {
            if (a[i]==b[j]) {
                flag = true;
                printf("%d needs %d steps, %d needs %d steps, they meet at %d\n",a[0],i,b[0],j,a[i]);
                break;
            }
        }
        if (flag) break;
    }
}


int main()
{
    long int n1, n2; 
    while(true) {
        cin >> n1 >> n2;
        if (n1==0 && n2==0)
            break;

        collaz(a,n1);
        collaz(b,n2);
        MeetStep(a,b);
        a.clear(); b.clear();
        vector<long>().swap(a); vector<long>().swap(b);

    }

    return 0;
}