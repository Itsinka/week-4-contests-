#include <iostream>  
using namespace std;
int main()
{
    float a[1000];
    int n, i, min = 1000, min_i;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
            min_i = i;
        }
    }
    cout << min_i;
    return 0;
}