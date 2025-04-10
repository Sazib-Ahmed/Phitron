#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i = 0, j = 0, curr = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m], c[n + m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    while (i < n && j < m) {
        if (a[i] < b[j])
            c[curr++] = a[i++];
        else 
            c[curr++] = b[j++];    
    }
    
    while (i < n)
        c[curr++] = a[i++];

    while (j < m)
        c[curr++] = b[j++]; 

    for (int i = 0; i < n + m; i++)
        cout << c[i] << ' ';
}