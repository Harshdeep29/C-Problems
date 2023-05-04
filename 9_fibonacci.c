#include<stdio.h>
int fib(int );
int main()
{
    int n;
    printf("Enter number of terms of fibonacci series you want to print: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
int fib(int n){
    int first=0,second=1,third;
    printf("Fibonacci series is \n");
    if(n==1){
        printf("%d",first);
    }
    if(n==2){
        printf("%d\t%d",first,second);
    }
    printf("%d\t%d\t",first,second);
    for(int i=3;i<=n;i++){
        third=first+second;
        printf("%d\t",third);
        first=second;
        second=third;
    }
    return 0;
}