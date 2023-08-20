#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int>& v){
    int s=0;
    for (int i=0; i< v.size(); i++)
        s+=v[i];
    for (int i=0; i< v.size(); i++)
        v[i]=i*10;
    return s;
}

int main(){
    int n; cin >> n;
    vector<int> vec(n);
    for (int i=0; i<n;i++)
        cin >> vec[i];
    
    
    cout << sum(vec) << endl;
    for (int i =0; i<vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}