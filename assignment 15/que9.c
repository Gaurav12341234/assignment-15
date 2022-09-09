//9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void fun(int a[5],int b[5]);
int main()
{
    int a[5],b[5],i;
    printf("Enter numbers of first array:");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    printf("Enter numbers of second array:");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    fun(a,b);
    return 0;
}
void fun(int a[5],int b[5])
{
    int temp[10],i,j,set;
    printf("Merge two arrays :");
    for(i=0;i<=4;i++)
        temp[i]=a[i];
    for(i=5;i<=9;i++)
        temp[i]=b[9-i];
    for(i=0;i<=9;i++)
        printf("%d ",temp[i]);
    printf("\nSorted in Descending order:");
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(temp[i]<temp[j])
            {
                set=temp[i];
                temp[i]=temp[j];
                temp[j]=set;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",temp[i]);
}