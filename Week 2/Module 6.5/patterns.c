#include <stdio.h>

int main() {

    int n1=6, n2=5, n3=6, n4=5;
    char ch='A';

    printf("Pattern 1\n\n");

    for(int i=1; i<=n1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\nPattern 2\n\n");

    for(int i=n2; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }


    printf("\n\nPattern 3\n\n");

    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ", ch+i);
        }
        printf("\n");
    }


    printf("\n\nPattern 4\n\n");

    for(int i=1; i<=n4*2; i+=2)
    {
        for(int j=(n4*2)-i; j>0; j--)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
