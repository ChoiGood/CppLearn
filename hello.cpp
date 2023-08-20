#include <iostream>
using namespace std;

void get_input(int &n)
{
    cout << "input an integer: ";
    cin >> n;
}

int main() {
    int n;
    get_input(n);
    cout << "Hello, " << n << "!" << endl;
    return 0;

}