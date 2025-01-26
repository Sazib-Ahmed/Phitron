#include <bits/stdc++.h>
using namespace std;

int main() {    
    int t = 0;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s, word;
        getline(cin, s);
        stringstream st(s);
        map<string, int> m;

        while (st >> word) {
            m[word]++;
        }

        string curMaxSt = m.begin()->first;
        int curMaxVal = m.begin()->second;
        for (auto it = m.begin(); it != m.end(); it++) {
            if(it->second > curMaxVal) {
                curMaxSt = it->first;
                curMaxVal = it->second;
            }
        }

        stringstream st1(s);
        map<string, int> m1;
        while (st1 >> word) {
            m1[word]++;
            if (m1[word] == curMaxVal) {
                cout << word << ' ' << m1[word] << endl;
                break;
            }
        } 
    }
    return 0;
}

/*
https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/count-me-2

Count Me
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a sentence  that contains words with lowercase and uppercase English alphabets separated by spaces. You need to determine which word occurs the most times and also provide the count of that word.

Note: If there are multiple words that occur the most, print the first word that reaches the maximum count before others.

Input Format

First line will contain , the number of test cases.
Each test case will contain the sentence .
Constraints

, Here  means the length of .
Output Format

Output the word and the count that occurs the most.
Sample Input 0

1
Ratul loves to play football when he gets time but Ratul is not a good player so his teacher asked Ratul if he can play with him so that Ratul can progress
Sample Output 0

Ratul 4
Sample Input 1

2
ratul piyush fohad shuvo rafi piyush fohad ratul 
jony jony yes papa eating sugar no papa telling lies no papa open your mouth ha ha ha 
Sample Output 1

piyush 2
papa 3

*/