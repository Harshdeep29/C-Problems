#include<stdio.h>
int sd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits in the number is %d",sd(n));
}
int sd(int n){
    int remainder=0,sum=0;
    while (n != 0)
    {
        remainder= n % 10;
        sum = sum + remainder;
        n = n/10;
    }
    return sum;
}