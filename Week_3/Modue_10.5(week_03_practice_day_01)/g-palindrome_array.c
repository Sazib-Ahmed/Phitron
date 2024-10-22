#include<stdio.h>

int main() {
    int n = 0, is_pal = 1;
    scanf("%d", &n);

    int a[n];
    //taking arry input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%d ", a[i]);
    // }

    //comparing every element form first to middle with last to middle to check if the array is palindrome.  
    for (int i = 0, j = n-1; i <= j; i++, j--) {
        //printf("\n%d %d\n", a[i], a[j]);
        if (a[i] != a[j]) {
            is_pal = 0;
            break;
        }
    }
    
    if (is_pal) {
        printf("YES");
    }
    else {
        printf("NO");
    }
 
    return 0;
}


// Given a number N
//  and an array A
//  of N
//  numbers. Determine if it's palindrome or not.

// Note:

// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

// Input
// First line contains a number N
//  (1≤N≤105)
//  number of elements.

// Second line contains N
//  numbers (1≤Ai≤109)
// .

// Output
// Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).