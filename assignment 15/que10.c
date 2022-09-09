//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int a[10]);
int main()
{
    int a[10],i;
    printf("Enter 10 numbners:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    frequency(a);
    return 0;
}
void frequency(int a[10])
{
    int temp[100]={0,0};
    int i;
    printf("The frequency of each elements is:\n");
    for(i=0;i<=9;i++)
        temp[a[i]]++;
    for(i=0;i<=99;i++)
        if(temp[i])
            printf("%d frequency is :%d\n",i,temp[i]);
}