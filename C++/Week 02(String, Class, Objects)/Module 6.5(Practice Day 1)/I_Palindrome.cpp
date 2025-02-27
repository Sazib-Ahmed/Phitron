#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    bool isPal = true;
    for (int i = 0, j = str.size()-1; i <= j; i++, j-- )
    {
        if(str[i] != str[j]) {
            isPal = false;
            break;
        }
    }

    cout << (isPal ? "YES" : "NO");
    return 0;
}