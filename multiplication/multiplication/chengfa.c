#include<stdio.h>
int main()
{
	int n=0, i=0,b=0;
	scanf_s("%d", &n);
	for (i=1; i <= n; i++)
	{
		for(b=1;b<=i;b++)
		{
			printf("%d*%d=%d", i, b, i * b);
			printf(" ");
			if (i == b)
			{
				printf("\n");
			}
		}
	
	
	}
	//printf("%d\n", n);
	return 0;
}