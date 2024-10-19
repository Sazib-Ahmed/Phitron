#include<stdio.h>

int main() {
    int pass;
    
    do {
        scanf("%d", &pass);
        if (pass==1999) {
            printf("Correct");
            //break;
        }
        else {
            printf("Wrong\n");
        }
    }
    while(pass!=1999);
    return 0;
}