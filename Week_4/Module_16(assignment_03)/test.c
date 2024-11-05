
/*
#Difference 16
You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.

Note: Use pointers to solve this Problem.

Input Format

Input will contain two integers A and B.
Constraints

0 <= A <= 100
0 <= B <= 100
Output Format

Print a single integer representing the absolute difference between A and B.
Sample Input 0

6 10
Sample Output 0

4
--------------------------------
#Solution
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int *x = &a, *y = &b;
    
    printf("%d", abs(*x - *y));
    return 0;
}

========================================================================
#Dynamic Array 7
You will be given N integer Numbers.

You will initialy declare an array with length 1.

After taking input of each numbers you will insert the number in the end and increase the array length by one.

Finally, print all N numbers in the array in a single line, separated by spaces.

Note: The solution must be implemented with dynamic array.

Input Format

The first line will contain an integer N, the number of elements.
The second line will contain N integers.
Constraints

1 <= N <= 1000
1 <= Each integers <= 10^9
Output Format

Print the array of N integers in a single line, with all the elements separated by spaces.

Sample Input 0

5
1 4 2 6 9
Sample Output 0

1 4 2 6 9
----------------------------------
#Solution
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 1;
    int *arr = (int *) malloc(n * sizeof(int));
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        int *temp = (int *) realloc(arr, (2 + i) * sizeof(int));
        if (temp != NULL){
            arr = temp;
        }
        else {
            printf("Memory reallocation FAILED");
            free(arr);
            return 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    
    free(arr);
    
    return 0;
}

================================================
#No Repeatation
You will be given an Array of N integers, print the count of numbers that have appeared only once.

Input Format

The first line will contain an integer N.
The next line will contain N integers.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
Output Format

Print a single integer,the count of numbers that have apeared only once in the array.

Sample Input 0

10
1 4 3 3 5 2 4 6 2 3
Sample Output 0

3
Explanation 0

In the sample only 1, 5, 6 have apeared only once in the array.So, the count is 3.

-------------------------------------------------
#Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 0;
    scanf("%d", &n);
    
    int arr[n], num_freq[100005] = {0}, onc_nums = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        num_freq[arr[i]]++;
    }
    
    for (int i = 0; i < 100005; i++) {
        if (num_freq[i] == 1) {
            onc_nums++;
        }
    }

    printf("%d", onc_nums);

    return 0;
}

====================================================
#Count in matrix

#Problem Statement

You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.
Constraints

2 <= N,M,X <= 100
0 <= Element <= 1000
0 <= Number <=1000
Output Format

For each of the x integers print a single line with how many times that number have appeared.

Sample Input 0

2 3 3
1 2 5
2 6 4
2
6
7
Sample Output 0

2
1
0
---------------------------------------------
#Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 0, x = 0, ser_num;
    scanf("%d %d %d", &n, &m, &x);
    
    int arr[n][m], num_freq[1005] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            num_freq[arr[i][j]]++; 
        }
    }

    for (int i = 0; i < x; i++) {
        scanf("%d", &ser_num);
        printf("%d\n", num_freq[ser_num]);

    }
    
    return 0;
}

===================================================================
#Unit Matrix
Problem Statement

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

Input Format

First line will contain N, the row and column of the square matrix.
Then the N * N sized matrix will be given where the values are integer only.
Constraints

1 <= N <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.
Sample Input 0

3
1 0 0
0 1 0
0 0 1
Sample Output 0

YES
Sample Input 1

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1
Sample Output 1

NO
--------------------------------------
#Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0, is_unit = 1;
    scanf("%d", &n);
    
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (arr[i][j] != 1) {
                    is_unit = 0;
                }
            }
            else {
                if (arr[i][j] != 0) {
                    is_unit = 0;
                }
            }
        }
    }
    
    if (is_unit) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
      
    return 0;
}

*/