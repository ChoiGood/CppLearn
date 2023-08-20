#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];

    //iterator
    //vector<int>::iterator it = v.begin();
    /*
    for(auto it = v.begin(); it !=v.end(); it++)
        cout << *it << " ";
    */
    
    for (auto& it: v)
        cout << it << " ";

    //최종적으로 벡터 사용할 때 이렇게 상요하면되는데
    //왜 iterator 가 필요하냐?
    for (int i:v)
        cout << i << " ";
    


}