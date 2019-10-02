#include <stdio.h>
int main()
{
	int N1,M1,N2,M2;
	printf("Enter the order of first array as 3 4: ");
	scanf("%d %d",&N1, &M1);
	int ar[N1][M1];
	printf("Enter the first matrix\n");
	for(int i = 0; i<N1; i++)
	{
		for(int j = 0; j<M1; j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter the order of second array as 3 4: ");
	scanf("%d %d",&N2, &M2);
	if(M1!=N2)
	{
		printf("---WARNING---\nNo of columns of first matrix and No of rows of second matrix should be equal.\n");
		return 0;
	}
	int br[N2][M2];
	printf("Enter the second matrix\n");
	for(int i = 0; i<N2; i++)
	{
		for(int j = 0; j<M2; j++)
		{
			scanf("%d", &br[i][j]);
		}
	}
	int op = N1 * M2;
	int ans[N1][M2];
	for(int i = 0; i<N1; i++)
	{
		for(int j = 0; j<M2; j++)
		{
			ans[i][j] = 0;
		}
	}
	int i=0,j=0,k=0;
	while(op--)
	{
		for(int k = 0; k < N2; k++)
		{
			ans[i][j] += ar[i][k]*br[k][j];
		}
		j++;
		if(j==M2)
		{
			j=0;
			i++;
		}
	}
	printf("---Multiplication of Matrix---\n");
	for(int i = 0; i<N1; i++)
	{
		for(int j = 0; j<M2; j++)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
}
