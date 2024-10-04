#include<stdio.h>




//Kahan pina 2

int main()
{
    int n=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ", i);
        if(i%3==0 || i%5==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

}





















// //Kahan pina 2

// int main()
// {
//     int m=0;
//     scanf("%d", &m);

//     if(m%3==0)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }


// }










// Khana pina 1

// int main()
// {
//     int n=0;
//     scanf("%d", &n);

//     if(n>=1000)
//     {
//         printf("Three Kacchi");
//     }
//     else if (n>=500)
//     {
//         printf("One Large Pizza");
//     }
//     else if (n>=250)
//     {
//         printf("Three Small Burger");    
//     }
//     else if (n>=100)
//     {
//         printf("Three Fuchka");
//     }
//     else
//     {
//         printf("Nothing");
//     }


// }





//multiplication

// int main()
// {
//     long long int a=0,b=0;
//     scanf("%lld %lld", &a, &b);
//     printf("%lld",(a*b));
// }