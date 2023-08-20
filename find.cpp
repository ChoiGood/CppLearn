#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    
    // fine 10
    int x; cin>>x;

    auto it = find(v.begin(),v.end(),x);
    if (it != v.end())
        cout << "I found " << *it << "!" << endl;
    else
        cout << "I can't find " << x << "!" << endl;
}