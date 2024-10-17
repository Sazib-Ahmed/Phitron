#include<stdio.h>

int main() {
    long long int n=0, sum=0;
    scanf("%lld", &n);
    sum=(n*(n+1))/2;
    printf("%lld", sum);

    return 0;
}


//require long time
/*
#include<stdio.h>

int main() {
    long long int n=0, sum=0;
    scanf("%lld", &n);

    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    printf("%lld", sum);

    return 0;
}
*/