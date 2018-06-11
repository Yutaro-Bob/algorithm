/*
 *heap
 */
/*version 1*/

#include <stdio.h>

int main(void)
{
    int heap[100];
    int n, i, s, p, w;

    n = 1;
    while (scanf("%d", &heap[n]) !=EOF){    
        s=n;
        p=s/2;                              
        while (s>=2 && heap[p]>heap[s]){    
            w=heap[p];heap[p]=heap[s];heap[s]=w;
            s =p;p=s/2;
        }
        n++;
    }
    for (i=1;i<n;i++)
        printf("%d ",heap[i]);
    printf("\n");
}

/* version 2*/

#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int heap[100];
    int i, n, p, s, m;
    
    n=1;                                      
    while (scanf("%d", &heap[n])!=EOF)
        n++;
    m=n-1;                                    
    for (i=m/2;i>=1;i--){
        p=i;                                  
        s=2*p;                            
        while (s<=m){
            if (s<m && heap[s+1]<heap[s])   
                s++;
            if (heap[p]<=heap[s])
                break;
            swap(&heap[p], &heap[s]);
            p=s; s=2*p;                      
        }
    }          
    for (i=1;i<=m;i++)
        printf("%d", heap[i]);
    printf("\n");
}
void swap(int *a, int *b)
{
    int w;
    w=*a;*a=*b;*b=w;
}
