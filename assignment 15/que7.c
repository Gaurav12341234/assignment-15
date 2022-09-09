//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int count(int b[],int);
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbners:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    s=count(a,10);
    printf("Total duplicate elements is %d",s);
    return 0;
}
int count(int b[],int N)
{
    int i,j ,count=0;
    for(i=0;i<=N-1;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(b[i]==b[j])
                count++;
        }
    }
    return count;
}