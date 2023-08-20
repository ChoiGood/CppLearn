#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct mycompare {

    bool operator() (string s1, string s2){
        return s1 < s2;
    }
};



int main(){
    int n; cin >> n;
    priority_queue<string,vector<string>,mycompare> pq;
    //priority_queue<string,vector<string>,greater<string>> pq;
    for(int i=0; i < n; i++){
        string x; cin >> x;
        pq.push(x);
    }

    for(int i=0; i<n; i++){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}