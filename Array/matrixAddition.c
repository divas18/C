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
	if(N1!=N2 || M1 != M2)
	{
		printf("---WARNING---\nNo of rows of both matrix and No of columns of both matrix should be equal.\n");
		return 0;
	}
	int br[N2][M2], ans[N1][M1];
	printf("Enter the second matrix\n");
	for(int i = 0; i<N2; i++)
	{
		for(int j = 0; j<M2; j++)
		{
			scanf("%d", &br[i][j]);
		}
	}
	for(int i = 0; i<N1; i++)
	{
		for(int j = 0; j<M1; j++)
		{
			ans[i][j] = ar[i][j]+br[i][j];
		}
	}
	printf("-----Sum of the matrix-----\n");
	for(int i = 0; i<N1; i++)
	{
		for(int j = 0; j<M1; j++)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
}
