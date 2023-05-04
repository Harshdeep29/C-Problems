//AVG of array
#include<stdio.h>
int main()
{
    int a[30],m,sum=0;
    int avg;
    printf("Enter numbers of elements of array: ");
    scanf("%d",&m);
    printf("Enter the elements: ");
    for(int i=0;i<m;i++){
            scanf("%d",&a[i]);
        }
    for(int i=0;i<m;i++){
        sum=sum+a[i];
    }
    avg=sum/m;
    printf("%d is the avg of all elements of array",avg);
}