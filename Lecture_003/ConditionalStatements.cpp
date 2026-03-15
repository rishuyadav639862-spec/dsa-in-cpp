#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number : ";
    cin >> n;

    if(n%2 == 0) {
        cout << "even\n";
    } else {
        cout << "odd\n";
    }

    return 0;
}