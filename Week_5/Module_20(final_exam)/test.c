//Same same but different
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char s[3][105];
    for (int i = 0; i < 3; i++) {
        scanf("%s", s[i]);
    }

    int len = strlen(s[0]);
    int min = INT_MAX;
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            int a, b;
            if (i == 0) {
                a = 1;
                b = 2;
            }
            else if (i == 1) {
                a = -1;
                b = 1;
            }
            else if (i == 2) {
                a = -2;
                b = -1;
            }

            if(s[i][j] != s[i + a][j]) {
                count++;
            }
            if(s[i][j] != s[i + b][j]) {
                count++;
            }
        }
        if (min > count) min = count;
    }

    printf("%d\n", min);
    return 0;           
}

//More Optimized
/*
#include <stdio.h>
#include <string.h>

int main() {
    char s[3][105];
    for (int i = 0; i < 3; i++) {
        scanf("%s", s[i]);
    }

    int len = strlen(s[0]);
    int totalChanges = 0;

    for (int j = 0; j < len; j++) {
        // Characters at position j in each string
        char ch1 = s[0][j];
        char ch2 = s[1][j];
        char ch3 = s[2][j];

        // Case analysis for the characters at each position j
        if (ch1 == ch2 && ch2 == ch3) {
            // All characters are the same - no changes needed
            continue;
        } else if (ch1 == ch2 || ch1 == ch3 || ch2 == ch3) {
            // Two characters are the same, one is different - one change needed
            totalChanges += 1;
        } else {
            // All characters are different - two changes needed
            totalChanges += 2;
        }
    }

    printf("%d\n", totalChanges);
    return 0;
}

*/





















/*
//Find the Missing Number
#include <stdio.h>

void findMissingNum(long long int m, int a, int b, int c) {
    if (m == 0) {
        printf("%d ", 0);
        return;
    }

    long long int mul = (long long int)(a * b * c);
    if (mul == 0 || m % mul != 0) {
        printf("%d ", -1);
        return;
    }

    long long int d = m / mul;
    printf("%lld ", d);
}

int main() {
    int t = 0;
    scanf("%d", &t);

    long long int m;
    int a, b, c;
    for (int i = 0; i < t; i++) {
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        findMissingNum(m, a, b, c);
        printf("\n");
    }

    return 0;
}



//Swap in Matrix
#include <stdio.h>

int main() {
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    //swapping all the elements of the first column with the elements of the last column
    for (int i = 0, j = 0; i < n; i++) {
        int temp = mat[i][j];
        mat[i][j] = mat[i][m - 1];
        mat[i][m - 1] = temp;
    }
    //swapping the elements of the first row with elements of the last row
    for (int i = 0, j = 0; j < m; j++) {
        int temp = mat[i][j];
        mat[i][j] = mat[n - 1][j];
        mat[n - 1][j] = temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}




//Jadu Matrix
#include <stdio.h>

int main() {
    int n = 0, m = 0, isJaduMat = 1;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         scanf("%d", &mat[i][j]);
    //     }
    // }

    if (n != m) {
        isJaduMat = 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                //taking inputs and checking the conditions in the same loop
                scanf("%d", &mat[i][j]);

                if (i == j || i + j == n - 1) {
                    if (mat[i][j] != 1) {
                        isJaduMat = 0;
                        break;
                    }
                }
                else if (mat[i][j] != 0) {
                    isJaduMat = 0;
                    break;
                }
            }
        }
    }

    printf((isJaduMat)? "YES" : "NO");
    return 0;
}

-----------------------------------------------------
//Visiting Monument

#include <stdio.h>

void printIncDecPat(int i, int n) {
    if (n == i) {
        printf("%d ", i);
        return;
    }

    printf("%d ", i);
    printIncDecPat(i + 1, n);
    printf("%d ", i);
}


int main() {
    int t = 0, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printIncDecPat(1, n);
        printf("\n");

    }
    return 0;
}

*/