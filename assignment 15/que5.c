//5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
//   Function has to return the value of the element.
#include<stdio.h>
int dupli(int b[],int);
int main()
{
    int a[6],i,s;
    printf("Enter 6 numbers:");
    for(i=0;i<=5;i++)
        scanf("%d",&a[i]);
    s=dupli(a,6);
    printf("First occurrence of adjacent duplicate value is %d:",s);
    return 0;
}
int dupli(int b[],int N)
{
    int i;
    for(i=0;i<=N-1;i++)
        if(b[i]==b[i+1])
            return b[i];
}