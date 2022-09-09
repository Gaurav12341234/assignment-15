//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse(int b[],int);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Reverse order:");
    reverse(a,10);
    return 0;
}
void reverse(int b[],int N)
{
    int i;
    for(i=N-1;i>=0;i--)
        printf("%d ",b[i]);
}