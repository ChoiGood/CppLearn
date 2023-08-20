#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
    map<string, int> mymap;
    int n; scanf("%d", &n);
    for (int i=0; i< n; i++) {
        int num; cin >> num;
        string str; cin >> str;
        mymap[str] = num;
    }

    for (pair<string,int> item: mymap)
        cout << item.first << ": " << item.second << endl;
    

}