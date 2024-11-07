


























/*
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