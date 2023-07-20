#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a[100];
    int i;
    for (i = 0; i < 100; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            cout << i << endl;
            break;
        }
    }

    for (int j = i; j > 0; j--) {
        cout << sqrt(a[j - 1]) << endl;
    }

    return 0;
}