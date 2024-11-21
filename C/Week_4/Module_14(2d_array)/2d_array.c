#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int _2d_array [row][col];
    //int _2d_array [2][3] = {{1, 2, 3}, {4, 5, 6}};
                                // 1  2  3
                                // 4  5  6

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &_2d_array[i][j]);
        }
    }
    

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", _2d_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}