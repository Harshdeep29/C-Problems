//Greatest no of array
#include <stdio.h>
  int main() 
{
    int a[10],greatest;
    printf("Enter elements of array:");
    for (int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    greatest=a[0];
    for (int i=0;i<10;i++) {
        if (a[i]>greatest){
            greatest = a[i];
        }
    }
    printf("Greatest of given numbers is %d", greatest);
  }