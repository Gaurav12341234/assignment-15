//4. Write a function to rotate an array by n position in d direction. The d is an indicative 
//   value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//   d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void fun(int a[],int,int);
int main()
{
    int b[10],i,n=4;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&b[i]);
    printf("Rotate an array by %d position in left direction:",n);
    fun(b,10,n);
    return 0;
}
void fun(int a[],int s,int N)
{
    int i,j,temp;
    for(j=1;j<=N;j++)
    {
        temp=a[0];
        for(i=0;i<s-1;i++)
            a[i]=a[i+1];
        a[s-1]=temp;
    }
    for(i=0;i<=s-1;i++)
        printf("%d ",a[i]);
}
