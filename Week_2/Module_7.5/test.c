#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n=0, a, zeros=0, ones=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a==0){
            zeros++;
        }
        else{
            ones++;
        }
    }
    printf("%d %d", zeros, ones);
    return 0;
}