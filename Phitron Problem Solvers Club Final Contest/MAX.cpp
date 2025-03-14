#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<int, int> freq;
    map<int, set<int>> freqMap;

    while (q--) {
        int opt;
        cin >> opt;

        if (opt == 1) {
            int x;
            cin >> x;
            int prevFreq = freq[x];
            if (prevFreq > 0) {
                freqMap[prevFreq].erase(x);
                if (freqMap[prevFreq].empty()) {
                    freqMap.erase(prevFreq);
                }
            }
            freq[x]++;
            int newFreq = freq[x];
            freqMap[newFreq].insert(x);

        } else if (opt == 2) {
            if (freqMap.empty()) {
                cout << "empty\n";
            } else {
                int maxFreq = prev(freqMap.end())->first;
                int val = *prev(freqMap[maxFreq].end());
                cout << val << "\n";
                int toRemove = max(1, maxFreq / 2);
                freq[val] -= toRemove;

                if (freq[val] == 0) {
                    freqMap[maxFreq].erase(val);
                    if (freqMap[maxFreq].empty()) {
                        freqMap.erase(maxFreq);
                    }
                } else {
                    freqMap[maxFreq].erase(val);
                    if (freqMap[maxFreq].empty()) {
                        freqMap.erase(maxFreq);
                    }
                    freqMap[maxFreq - toRemove].insert(val);
                }
            }
        }
    }

    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin >> q;
    map<ll, ll> freq;
    map<ll, set<ll>> freqMap;

    while (q--) {
        int opt;
        cin >> opt;

        if (opt == 1) {
            ll x;
            cin >> x;
            ll prevFreq = freq[x];
            if (prevFreq > 0) {
                freqMap[prevFreq].erase(x);
                if (freqMap[prevFreq].empty()) {
                    freqMap.erase(prevFreq);
                }
            }
            freq[x]++;
            ll newFreq = freq[x];
            freqMap[newFreq].insert(x);

        } else if (opt == 2) {
            if (freqMap.empty()) {
                cout << "empty\n";
            } else {
                ll maxFreq = prev(freqMap.end())->first;
                ll val = *prev(freqMap[maxFreq].end());
                cout << val << "\n";
                ll toRemove = max(1LL, maxFreq / 2);
                freq[val] -= toRemove;
                if (freq[val] == 0) {
                    freqMap[maxFreq].erase(val);
                    if (freqMap[maxFreq].empty()) {
                        freqMap.erase(maxFreq);
                    }
                } else {
                    freqMap[maxFreq].erase(val);
                    freqMap[maxFreq - toRemove].insert(val);
                }
            }
        }
    }

    return 0;
}


*/

/*#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll q;
    cin >> q;
    map<ll, ll> freq; 
    priority_queue<pair<ll, ll>> pq; 

    while (q--) {
        int opt;
        cin >> opt;
        
        if (opt == 1) {
            ll x;
            cin >> x;
            freq[x]++; 
            pq.push({freq[x], x});
        }
        else if (opt == 2) {
            if (freq.empty()) {
                cout << "empty\n";
            } else {
                while (true) {
                    auto top = pq.top();
                    ll maxFreq = top.first;
                    ll val = top.second;
                    pq.pop();
                    
                    if (freq[val] == maxFreq) {
                        cout << val << "\n";
                        freq[val] -= max(1LL, maxFreq / 2); 
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll q, x;
    vector<ll> arr;

    while (q--) {
        int opt;
        cin >> opt;
        if (opt == 1) {
            cin >> x;
            //arr.push_back(x);
        }
        else if (opt == 2) {
            if(arr.empty())
                cout << "empty\n";
            else{

            }
        
        }
    }
    

    return 0;
}
https://www.hackerrank.com/contests/phitron-problem-solvers-club-final-contest-batch-6/challenges/max-15

MAX
Problem
Submissions
Discussions
Problem Statament

You are given an empty array initially. Then, you will be given q queries to perform on this array. You will be given 2 types of queries to perform.

1 X - add x to the array.
2 - If the array is empty print empty otherwise print the element which occurrence is maximum , if there exist multiple element with maximum occurrence print the largest value which occurrence is maximum and erase  max(1, ⌊total occurrences of that element / 2⌋) occurrences of that value.
Here, ⌊x⌋ represents the largest integer less than or equal to a given number x. For example : ⌊5/2⌋ = ⌊2.5⌋ = 2

It is guaranteed that at least one type 2 query will be present in all the test case.

Note: The input file is too large. Must use fast I/O and don't use endl. Use "\n" instead of endl.

Fast I/O: Add these 2 lines at the first of main function -

ios::sync_with_stdio(false);
cin.tie(nullptr);
Input Format

The first line contains a single positive integer q.
The next q lines will contains the queries.
Constraints
1 <= q <= 10^6
1 <= x <= 10^9

Output Format

If the query type is 2 print the desired output as written in the problem statement. Dont' forget to print a newline after each test case.

Sample Input 0

12
2
1 12
1 10
1 12
1 12
1 10
1 12
1 10
1 10
2
1 15
2
Sample Output 0

empty
12
10
Explanation 0

During the first 2 type of query, the array is empty so you must print empty. For the next 2 type of query, 10 appears 4 times and 12 also appears 4 times. Since their occurrences are the same you must print 12 because it is greater than 10. After printing 12, remove ⌊4/2⌋ = 2 means erase 2 occurrences of 12.
*/