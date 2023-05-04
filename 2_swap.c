#include<stdio.h>
int noswap(int , int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    noswap(a,b);
    return 0;
}
int noswap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are %d and %d",a,b);
}