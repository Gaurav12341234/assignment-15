//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void unique(int a[],int);
int main()
{
    int b[7],i;
    printf("Enter 7 numbers:");
    for(i=0;i<=6;i++)
        scanf("%d",&b[i]);
    printf("Unique elements are:");
    unique(b,7);
    return 0;
}
void unique(int a[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                    break;
            }
        }
        if(j==7)
            printf("%d ",a[i]);
    }
}