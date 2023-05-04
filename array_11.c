//2d ARRAY
#include<stdio.h>
int main()
{
    int a[10][10],m,n;
    printf("Enter size of array in m*n way: ");
    scanf("%d%d",&m,&n);
    printf("Enter elements of array: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}