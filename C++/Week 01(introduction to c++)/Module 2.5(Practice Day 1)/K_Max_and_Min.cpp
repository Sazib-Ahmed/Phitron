#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int min = a;
    int max = a;

    if(b < min) min = b;
    if(b > max) max = b;

    if(c < min) min = c;
    if(c > max) max = c;

    cout << min << ' ' << max;
 
    return 0;
}

