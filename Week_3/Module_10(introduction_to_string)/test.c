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







/*
//lexic min max

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1005], s2[1005], s3[1005];
    scanf("%s %s %s", s1, s2, s3);

    //without swapping
    char min[1005], max[1005];
    strcpy(min, s1);
    strcpy(max, s1);

    //checking if s2 or s3 is the min
    if (strcmp(s2, s3) < 0 && strcmp(s2, s1) < 0) {
        strcpy(min, s2);
    }
    else if (strcmp(s3, s2) < 0 && strcmp(s3, s1) < 0) {
        strcpy(min, s3);
    }

    //checking if s2 or s3 is the max
    if (strcmp(s2, s3) > 0 && strcmp(s2, s1) > 0) {
        strcpy(max, s2);
    }
    else if (strcmp(s3, s2) > 0 && strcmp(s3, s1) > 0) {
        strcpy(max, s3);
    }

    printf("%s\n%s", min, max);

    //using swapping
    //arranging in ascending order
    if ( strcmp(s1, s2) > 0) {
        char temp[1005];
        strcpy(temp, s1);
        strcpy(s1, s2);
        strcpy(s2, temp);
    }
    if ( strcmp(s1, s3) > 0) {
        char temp[1005];
        strcpy(temp, s1);
        strcpy(s1, s3);
        strcpy(s3, temp);
    }
    if ( strcmp(s2, s3) > 0) {
        char temp[1005];
        strcpy(temp, s2);
        strcpy(s2, s3);
        strcpy(s3, temp);
    }
    printf("%s\n%s", s1, s3);

    return 0;
}

//job application 1
#include <stdio.h>

int main() {
    int n = 0, can;
    scanf("%d", &n);

    //without using array
    for (int i = 0; i < n; i++) {
        scanf("%d", &can);
        if (can >= 0 && can < 1) {
            printf("Entry-level candidate\n");
        }
        else if (can >= 1 && can <= 3) {
            printf("Junior candidate\n");
        }
        else if (can >= 4 && can <= 7) {
            printf("Mid-level candidate\n");
        }
        else if (can > 7 && can <= 20) {
            printf("Senior candidate\n");
        }
    }

    // //Using array
    // int cand[n];

    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &cand[i]);
    // }

    // for (int i = 0; i < n; i++) {
    //     if (cand[i] >= 0 && cand[i] < 1) {
    //         printf("Entry-level candidate\n");
    //     }
    //     else if (cand[i] >= 1 && cand[i] <= 3) {
    //         printf("Junior candidate\n");
    //     }
    //     else if (cand[i] >= 4 && cand[i] <= 7) {
    //         printf("Mid-level candidate\n");
    //     }
    //     else if (cand[i] > 7 && cand[i] <= 20) {
    //         printf("Senior candidate\n");
    //     }
    // }

    return 0;
}



//price range
#include <stdio.h>

int main() {
    int n = 0, x, y, el, count = 0;
    scanf("%d %d %d", &n, &x, &y);
    
    //Without using array
    //checking if the phone price is in the range and counting
    for (int i = 0; i < n; i++) {
        scanf("%d", &el);
        if (el >= x && el <= y) {
            count++;
        }
    }

    // //using array
    // int phones[n];

    // //taking inputs to the array
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &phones[i]);
    // }

    // //checking if the phone price is in the range and counting
    // for (int i = 0; i < n; i++) {
    //     if (phones[i] >= x && phones[i] <= y) {
    //         count++;
    //     }
    // }

    printf("%d", count);

    return 0;
}


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



*/