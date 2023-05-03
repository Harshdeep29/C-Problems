#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number whose factorial you want to calculate: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fact(a));
    return 0;   
}
int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}
