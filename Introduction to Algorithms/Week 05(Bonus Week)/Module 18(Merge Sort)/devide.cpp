#include <bits/stdc++.h>
using namespace std;

void devide(int arr[], int l, int r)
{
    for (int i = l; i <= r; i++)
        cout << arr[i] << ' ';
    cout << endl;

    if (l >= r)
        return;

    int mid = (l + r) / 2;
    devide(arr, l, mid);
    devide(arr, mid + 1, r);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    devide(arr, 0, n - 1);
}