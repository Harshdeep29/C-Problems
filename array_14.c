//Sorting array in ascending order
#include<stdio.h>
int main()
{
    int a[10],m,temp;
    printf("Enter no of elements: ");
    scanf("%d",&m);
    printf("Enter elements of array: ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}