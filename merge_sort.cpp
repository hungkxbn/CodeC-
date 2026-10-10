#include <bits/stdc++.h>
using namespace std;

int n;
int a[2000];

void merge_sort(int a[], int l, int r)
{
    if (r <= l) return;
    int mid = (l + r) / 2;
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);
    vector<int> b;
    int *p1;
    int *p2;
    p1 = &a[l];
    p2 = &a[mid+1];
    while (p1 != &a[mid + 1] && p2 != &a[r + 1])
    {
        if(*p1 > *p2)
        {
            b.push_back(*p1);
            p1++;
        }
        else
        {
            b.push_back(*p2);
            p2++;
        }
    }
    while (p1 != &a[mid + 1]) b.push_back(*p1++);
    while (p2 != &a[r + 1]) b.push_back(*p2++);
    for (int i = 0; i < b.size(); i++)
    {
        a[l+i] = b[i];
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(a, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}