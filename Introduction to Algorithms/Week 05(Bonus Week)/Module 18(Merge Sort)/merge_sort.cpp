#include <bits/stdc++.h>
using namespace std;
void conqure(int c[], int l, int mid, int r)
{
    int n = mid - l + 1, m = r - mid, i = 0, j = 0, curr = l;
    int a[n], k = l;
    for (int i = 0; i < n; i++, k++)
        a[i] = c[k];

    int b[m];
    k = mid + 1;
    for (int i = 0; i < m; i++, k++)
        b[i] = c[k];

    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[curr++] = a[i++];
        else
            c[curr++] = b[j++];
    }

    while (i < n)
        c[curr++] = a[i++];

    while (j < m)
        c[curr++] = b[j++];
}

void devide(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;
    devide(arr, l, mid);
    devide(arr, mid + 1, r);
    conqure(arr, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    devide(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}