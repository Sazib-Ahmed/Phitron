#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>

//#include <bits/stdc++.h>

/*
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
Find Jessica
Problem
Submissions
Leaderboard
Discussions
Problem Statement

Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

Input Format

Input will contain a string S containing names. There is a space in between two names.
Constraints

1 <= |S| <= 1000; Here |S| means the length of the string.
Output Format

Output YES or NO according to the question.
Sample Input 0

Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna
Sample Output 0

YES
Sample Input 1

Rahat Rifat Sakib Asif Sifat Ratul Munna
Sample Output 1

NO
Sample Input 2

Rahat Rifat Sakib Asif jessica Sifat Ratul Munna
Sample Output 2

NO
Sample Input 3

Rahat Rifat Sakib Asif Jessicarvai Sifat Ratul Munna
Sample Output 3

NO
------------------------------------
//#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool is_present = false;

    while(cin >> s){
        if( s == "Jessica"){
            is_present = true;
            break;
        }
    }
    cout << (is_present? "YES" : "NO") << endl; 
    return 0;
}

====================================
Replace Word
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain a line with S and X.
Constraints

1 <= T <= 1000
1 <= |S|, |X| <= 1000
|X| <= |S|
Output Format

For each test cases output the modified string S.
Sample Input 0

2
rahimisagoodguy good
canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
Sample Output 0

rahimisa#guy
can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer
Submissions: 544
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More

------------------------------------
//#include <bits/stdc++.h>

using namespace std;
int main() {
    int t = 0;
    string s, x;
    bool is_present;
    cin >> t;

    while(t--){
        cin >> s >> x;

        int s_len = s.size();
        int x_len = x.size();
        for(int i = 0; i < s_len; i++) {
            is_present = false;
            if(s[i] == x[0]){
                is_present = true;
                for(int j = 0; j < x_len; j++) {
                    if(x[j] != s[i+j]) is_present = false;
                }
                if(is_present == true) s.replace(i, x_len, "#");
            }
        }
        cout << s << endl;
    }
    
    return 0;
}
====================================

*/