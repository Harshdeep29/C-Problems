//Common elements of array
#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("Enter elements of first array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of second array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    printf("Common Elements are:\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]==b[j]){
                printf("%d\n",a[i]);
            }
        }
    }
}