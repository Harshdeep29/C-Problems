#include<stdio.h>
int sum(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum till %d is %d",a,sum(a));
    return 0;
}
int sum(int a){
    int total=0;
    for(int i=0;i<=a;i++){
        total=total+i;
    }
    return total;
}