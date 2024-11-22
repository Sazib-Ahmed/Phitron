/*
------------------------------------
====================================
------------------------------------
====================================
------------------------------------
====================================
Choose Three
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N and S.
Second line of each test case will contain the array A.
Constraints

1 <= T <= 100
1 <= N <= 100
1 <= S <= 1000
1 <= A[i] <= 1000 Where 0 <= i < N
Output Format

Output "YES" if it is possible, otherwise output "NO".
Sample Input 0

5
5 10
1 2 3 4 5
5 6
4 2 3 5 4
3 6
2 2 2
4 4
2 8 1 5
1 3
1
Sample Output 0

YES
NO
YES
NO
NO
Explanation 0

In the first test case, we can make 10 by adding 5+4+1. There are other ways too.
In the second test case, it is not possible to make 6 by adding three different indexed values from the array.
In the third case, it is possible to make 6 by using three different indexed values.
------------------------------------
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t = 0, n, s;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int is_poss = false;
        cin >> n >> s;
        
        int nums[n];
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        
        if(n > 2){
            for(int i = 0; i < n - 2; i++){
                for(int j = i + 1; j < n - 1; j++){
                    for(int k = j + 1; k < n; k++){
                        if(nums[i] + nums[j] + nums[k] == s) is_poss = true;
                    }
                    if(is_poss) break;
                }
                if(is_poss) break;
            }
        }
        
        cout << ((is_poss)? "YES" : "NO") << endl;
    }

    return 0;
}
====================================
Monkey
Problem
Submissions
Leaderboard
Discussions
Problem Statement:

Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

Note: Input will be given by EOF.

Input Format

Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
Constraints

1 <= |S| <= 10^5
Output Format

Output what Amena will write.
Sample Input 0

monkey
i love flower
Sample Output 0

ekmnoy
eefilloorvw
------------------------------------
#include <bits/stdc++.h>

using namespace std;


int main()
{
    char s[100005];
    while(cin.getline(s, 100005)){
        int len = strlen(s);
        sort(s, s+len);
        
        for(int i = 0; i < len; i++){
            if(s[i] != ' '){
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}

====================================
Sort It 2
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an array A and the size of that array N. You need to create a function named sort_it(). After taking the input for the size in main function, call that function by giving the size as parameter and take the array input inside that function. After that, you need to sort the array in descending order. Then, return that array from the function and receive it in the main function. Finally, print the sorted array in the main function.

Input Format

First line will contain N.
Second line will contain the array A.
Constraints

1 <= N <= 10^5
-10^9 <= A[i] <= 10^9 Where 0 <= i < N
Output Format

Ouptut the array in descending order.
Sample Input 0

5
1 4 2 3 5
Sample Output 0

5 4 3 2 1
------------------------------------
#include <bits/stdc++.h>

using namespace std;

int* sort_it(int n){
    int* a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    return a;
}


int main()
{
    int n = 0;
    cin >> n;
    
    int* a = sort_it(n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
====================================
Sort It
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.

Input Format

First line will contain N.
Next line will contain the array A.
Constraints

1 <= N <= 10^5
-10^9 <= A[i] <= 10^9 Where 0 <= i < N
Output Format

Print two lines. First line will contain the array sorted in ascending order. Next line will contain the array sorted in descending order.
Sample Input 0

5
2 4 6 1 3
Sample Output 0

1 2 3 4 6
6 4 3 2 1
------------------------------------
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
    sort(a, a+n, greater<int>());
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
*/