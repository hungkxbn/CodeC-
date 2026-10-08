#include <bits/stdc++.h>
using namespace std;
int x[10];
int n;
void Try(int k)
{
    if (k == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << x[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        x[k] = i;
        Try(k+1);
    }
}

int main()
{
    cin >> n;
    cout << endl;
    Try(0);
}