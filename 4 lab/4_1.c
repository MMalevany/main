#include <stdio.h>
#include <stdlib.h>

int n,i;

int main(int argc, char *argv[]) {
	
	printf("Kolichestvo elementov massiva=");
	scanf("%d", &n);
	
	int a[n+1];
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=n; i>=1; i--)
	{
		printf("%d ", a[i]);		
	}
	
	return 0;
}
