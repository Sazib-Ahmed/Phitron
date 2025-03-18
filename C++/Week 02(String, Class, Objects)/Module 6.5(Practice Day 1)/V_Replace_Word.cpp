#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, subS = "EGYPT";
    cin >> s;
    int len = s.length(), cur = 0;
    char str[len];

    for (int i = 0; i < len; i++)
    {
        bool foundFlag = false;
        int count = 0;
        for (int j = 0; j < subS.length(); j++)
        {
            if (s[i + j] == subS[j])
            {
                count++;
            }
            else
            {
                break;
            }
            if (count == subS.length())
            {
                str[cur++] = ' ';
                i += subS.length() - 1;
                foundFlag = true;
            }
        }
        if (foundFlag == false)
            str[cur++] = s[i];
    }

    str[cur] = '\0';
    cout << str << endl;

    return 0;
}

/*
V. Replace Word
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
InputCopy
BRITISHEGYPTGHANA
OutputCopy
BRITISH GHANA
InputCopy
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
OutputCopy
ITALYKOREA  ALGERIA Z

*/