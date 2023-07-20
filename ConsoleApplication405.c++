#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int max = -1000000000;
    int array[10000];


    for (int i = 0; i < n; i++)
    {

        cin >> array[i];

    }


    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }

    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == array[i])
        {
            count++;
        }
    }

    cout << count << endl;
}
