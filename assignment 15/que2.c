//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int minimum(int b[],int);
int main()
{
    int a[5],s, i;
    s=minimum(a,5);
    printf("Smallest number is %d",s);
    return 0;
}
int minimum(int b[],int N)
{
    int i,min;
    printf("Enter %d elements:",N);
    for(i=0;i<=N-1;i++)
        scanf("%d",&b[i]);
    min=b[0];
    for(i=0;i<N-1;i++)
        if(min>b[i+1])
            min=b[i+1];
    return min;
}
