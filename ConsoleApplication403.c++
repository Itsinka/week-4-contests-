#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int min = 1000;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (min > a)
        {
            min = a;

        }

    }
    cout << min << endl;
}