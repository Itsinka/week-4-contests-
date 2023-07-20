#include <iostream>
using namespace std;
int main()
{
    int arr[99], y, c;
    for (int i = 0; i <= 99; i++) {
        cin >> y;
        if (y == -1) {
            c = i;
            break;
        }
        else {
            arr[i] = y;
        }
    }
    cout << c << '\n';
    for (int i = 0; i <= c - 1; i++) {
        cout << arr[i] << " ";
    }
}
