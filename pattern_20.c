#include <stdio.h>
int main()
{
    int n;
    char a='A';
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n - i; j++){
            printf("%c ",a);
        }
        printf("\n");
        a++;
    }
}