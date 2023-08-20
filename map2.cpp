#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
    map<string,int> mymap;
    int n; cin>>n;
    for(int i = 0; i< n; i++){
        string str; cin>>str;
        if(mymap.find(str) == mymap.end())
            mymap[str] = 1;
        else
            mymap[str] +=1;
    }

    for (pair<string,int> item : mymap)
        cout << item.first << ": " << item.second << endl;
}