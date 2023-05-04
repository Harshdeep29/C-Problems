#include <stdio.h>
int rev(int);
int main() 
{
    int n,original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    printf("%d after reversed is %d",original,rev(original));
    return 0;
}
int rev(int original){
    int remainder,reversed=0;
    int n=original;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}