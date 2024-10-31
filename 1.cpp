#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int n, k;
	scanf("%d%d",&n,&k);

	int* a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", a+i);
	}

	for(int i=0;i<n-1;i++)
		for (int j = i,temp;j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}

	for (int i = 1,min=a[0],count=1; i < n; i++)
	{
		if (a[i] != min)
		{
			min = a[i];
			count++;

			if (count == 3)
				printf("%d",min);
		}

	}



	free(a);
}