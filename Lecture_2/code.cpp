#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int b = a++; //kaam ; update
    cout << "b = " << b << endl; //10
    cout << "a = " << a << endl; //11
    return 0;
}