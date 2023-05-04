#include<stdio.h>
int lcm(int , int);
int main()
{
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d%d",&m,&n);
    lcm(m,n);
    return 0;
}
int lcm(int m,int n){
    for(int i=1;i<=n;i++){
        if(m*i%n==0){
            printf("LCM of %d and %d is %d",m,i,m*i);
            break;
        }
    }
    return 0;
}