






/*

//book reading 4
#include <stdio.h>

int main() {
    int n = 0, t, el, sum = 0, count = 0;
    scanf("%d %d", &n, &t);
    
    //Without using array
    for (int i = 0; i < n; i++) {
        scanf("%d", &el);
        sum += el;
        if (sum <= t) {
            count++;
        }
        else {
            break;
        }
    }


    // //using array
    // int books[t];

    // //taking inputs to the array
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &books[i]);
    // }

    // for (int i = 0; i < n; i++) {
    //     sum += books[i];
    //     if (sum <= t) {
    //         count++;
    //     }
    //     else {
    //         break;
    //     }
    // }
    // 
    printf("%d", count);
    return 0;
}



// do it
#include <stdio.h>

int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <=k; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}







//test 

#include <stdio.h>

int main() {
    char str[20];
    char str2[5] = "5";

    //scanf("%[^\n]s", str);

    //escape sequence
    char str1[] = "'\\Bangladesh' \n\tis a \"beautiful\" country.\\n \0 and ...";

    //just gets and puts is less relaiable, better alternative is fgets and fputs.
    //fgets(str, sizeof(str), stdin);
    //gets(str);

    fputs(str1, stdout);



    return 0;
}

*/