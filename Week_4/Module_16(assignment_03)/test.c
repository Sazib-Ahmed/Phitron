







/*
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
*/