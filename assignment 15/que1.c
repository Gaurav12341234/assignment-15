//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int Great(int b[],int);
int main()
{
    int a[5],s, i;
    s=Great(a,5);
    printf("Greatest number is %d",s);
    return 0;
}
int Great(int b[],int N)
{
    int i,max;
    printf("Enter %d elements:",N);
    for(i=0;i<=N-1;i++)
        scanf("%d",&b[i]);
    max=b[0];
    for(i=0;i<N-1;i++)
        if(max<b[i+1])
            max=b[i+1];
    return max;
}