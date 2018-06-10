/*
 *Euclidean Algorithm
 */
/* version 1*/
#include <stdio.h>

int main(void)
{
    int a,b,m,n;

    printf("enter two integers");
    scanf("%d %d", &a, &b);

    m=a; n=b;
    while (m!=n){
        if (m>n)
            m=m-n;
        else 
            n=n-m;
    }
    printf("greatest common divisor=%d\n", m);
}


/*version 2*/
#include <stdio.h>

int main(void)
{
    int a,b,m,n,k;

    printf("enter two integers");
    scanf("%d %d", &a, &b);

    m=a; n=b;
    do{
        k=m % n;
        m=n; n=k;
    } while(k!=0);
    printf("greatest common divisor=%d\n", m);
}
