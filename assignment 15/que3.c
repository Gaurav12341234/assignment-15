//3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int b[],int);
int main()
{
    int a[6],i;
    printf("Enter 6 numbers:");
    for(i=0;i<=5;i++)
        scanf("%d",&a[i]);
    printf("After sorting:");
    sort(a,6);
    return 0;
}
void sort(int b[],int N)
{
    int i,j,temp;
    for(i=0;i<=N-1;i++)
    {
        for(j=i+1;j<=N-1;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        printf("%d ",b[i]);
    }
}
