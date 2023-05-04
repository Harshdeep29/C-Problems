//GCD/HCF
#include<stdio.h>
int hcf(int,int);
int main()
{
    int m, n, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    hcf(m,n);
    return 0;
}
int hcf(int m,int n){
    int gcd;
    for(int i=1; i <= m && i <= n; ++i)
    {
        if(m%i==0 && n%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", m, n, gcd);
}