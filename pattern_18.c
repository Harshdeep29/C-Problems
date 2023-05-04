
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows you want to print: ");
    scanf("%d",&n);
	for (int i=0;i<n;i++) {
		for (int j=0;j<=i;j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
