#include<stdio.h>
int perfect(int);
int main()
{
    int a;
    printf("Enter a number you want to check: ");
    scanf("%d",&a);
    perfect(a);
    return 0;
}
int perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum==a){
        printf("%d is perfect",a);
    }
    else{
        printf("%d is not perfect",a);
    }
    return 0;
}