#include<stdio.h>

int main() {
    long long int a, b, k;
    int res1, res2;
    scanf("%lld %lld %lld", &a, &b, &k);

    res1 = a % k;
    res2 = b % k;

    /*
    If both a and b are divisible by k, both of them win and you should print "Both".
    If a is divisible by k but b isn't, Memo wins and you should print "Memo".
    If b is divisible by k but a isn't, Momo wins and you should print "Momo".
    If both a and b are not divisible by k, no one wins and you should print "No One".
    */

    if(res1==0 && res2==0){
        printf("Both");
    }
    else if(res1==0 && res2!=0){
        printf("Memo");
    }
    else if(res1!=0 && res2==0){
        printf("Momo");
    }
    else{
        printf("No One");
    }

    return 0;
}


//more optimized

/*
#include<stdio.h>

int main() {
    long long int a, b, k;
    
    // Read inputs
    scanf("%lld %lld %lld", &a, &b, &k);

    // Check divisibility directly in conditions
    if (a % k == 0 && b % k == 0) {
        printf("Both");
    }
    else if (a % k == 0) {
        printf("Memo");
    }
    else if (b % k == 0) {
        printf("Momo");
    }
    else {
        printf("No One");
    }

    return 0;
}

*/