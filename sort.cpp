#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    v.push_back(5);
    
    //sort
    //sort(v.begin(),v.begin()+3);
    sort(v.begin(),v.end());
    for (int i:v)
        cout << i << " ";

}