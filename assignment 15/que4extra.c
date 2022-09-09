//4. Write a function to rotate an array by n position in d direction. The d is an indicative 
//   value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//   d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ).
#include<stdio.h>
void fun(int a[5],int temp[5],int);
int main()
{
    int b[5], c[5],n=2,i;
    printf("Enter 5 numbers:");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    printf("Rotate an array by %d position in left direction:",n);
    fun(b,c,n);
    return 0;
}
void fun(int a[5],int temp[5],int n)
{
    int i,j=0;
    while(j<=2)
    {
        for(i=n;i<=4;i++)
        {
            temp[j]=a[i];
            j++;
        }
    }
    while(j<=4)
    {
        for(i=0;i<n;i++)
        {
            temp[j]=a[i];
            j++;
        }
    }
    for(i=0;i<=4;i++)
        printf("%d ",temp[i]);
}