/*
 *binary search
 */
/*version 1*/
#include <stdio.h>

#define N 10  /*number of data*/

int main(void)
{
    int a[]={2, 3, 7, 11, 31, 50, 55, 70, 77, 80};
    int key, low, high, mid, flag=0;

    printf("which number you want to search?");scanf("%d", &key);
    low=0;high=N-1;
    while (low<=high){
        mid=(low+high) /2;
        if (a[mid]==key){
            printf("%d locates %d\n", a[mid], mid);
            flag=1;
            break;
        }
        if (a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if (flag!=1)
        printf("not found\n");
}

/*verson 2*/
#include <stdio.h>
#define N 10 /*number of data*/

int main(void)
{
    int a[]={2, 3, 7, 11, 31, 50, 55, 70, 77, 80};
    int key, low, high, mid;

    printf("which number you want to search?");scanf("%d", &key);

    low=0;high=N-1;
    while (low<=high){
        mid=(low+high)/2;
        if (a[mid]<=key)
            low=mid+1;
        if (a[mid]>=key)
            high=mid-1;
    }
    if (low==high+2)
        printf("%d locates %d\n", a[mid], mid);
    else 
        printf("not found\n");
}
