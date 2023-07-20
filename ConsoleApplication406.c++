#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;
    int count = 0;



    for (int i = 0; i < n; i++)
    {
        if ('A' == s[i])
        {
            count++;
        }


    }


    cout << count << endl;
}