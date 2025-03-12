#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, indx = -1;
    cin >> n;
    long long int arr[n], target;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            indx = i;
            break;
        }
    }
    // sort(arr, arr + n);
    // cin >> target;
    // int l = 0, r = n - 1, indx = -1;
    // while (l <= r)
    // {
    //     int mid = l + (r - l) / 2;
    //     if (arr[mid] == target)
    //     {
    //         indx = mid;
    //         break;
    //     }
    //     else if (arr[mid] > target)
    //         r = mid - 1;
    //     else
    //         l = mid + 1;
    // }

    cout << indx <<endl;

    return 0;
}
/*
The Lost Book
Problem
Submissions
Discussions
Problem Statement

The central library of the city has a unique method of organizing its books. The books are arranged in an array of integers, where each integer represents a unique book code. The books are sorted in increasing order of these codes.

You are the head librarian and have received a request to locate a specific book. Given the sorted array of book codes and the target book code, your task is to determine if the book is available. If the book is found, return the index of the book in the array (0-based). Otherwise, return -1 to indicate the book is not in the collection.

Can you help to find the lost book?

Input Format

The first line contains an integer n, the number of books.
The second line contains n space-separated integers, representing the book codes in sorted order.
The third line contains a single integer target, the book code you are searching for.
Constraints

Output Format

Output the index(0 based) of the book if found else output -1.

Sample Input 0

5
10 20 5 6 3
3
Sample Output 0

4
Sample Input 1

6
10 20 5 6 3 66
99
Sample Output 1

-1
*/