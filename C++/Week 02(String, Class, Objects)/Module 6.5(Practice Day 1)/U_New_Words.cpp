#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, findStr = "EGYPT";
    cin >> s;

    int arr[26] = {0}, indx, minWord = INT_MAX;

    for (char c : s) {
        if(c >= 'A' && c <= 'Z'){
            indx = c - 'A';
            arr[indx]++;
        }
        else if(c >= 'a' && c <= 'z'){
            indx = c - 'a';
            arr[indx]++;
        }
    }

    for (char c : findStr)
            minWord = min(arr[c - 'A'], minWord);

    cout << minWord << endl;
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, findStr = "EGYPT";
    cin >> s;

    int arr[26] = {0}, minWord = INT_MAX;

    // Count frequency of letters in the input string
    for (char c : s) {
        if (isalpha(c)) { // Check if it's a letter
            arr[toupper(c) - 'A']++; // Convert to uppercase and count
        }
    }

    // Find the minimum count of the required letters
    for (char c : findStr) {
        minWord = min(arr[c - 'A'], minWord);
    }

    cout << minWord << endl;
    return 0;
}


U. New Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print number of times that "EGYPT" word can be formed from S
's characters.

Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

Input
Only one line contains a string S(1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters.

Output
Print the answer required above.

Examples
InputCopy
EgYpTaz
OutputCopy
1
InputCopy
pemigdbeigyypetet
OutputCopy
2



*/