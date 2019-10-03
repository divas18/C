/*Program to reverse the columns of matrix n x m*/
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter order of the Matrix as(3 4): ");
    scanf("%d %d", &n, &m);
    printf("Enter the elements of the Matrix\n");
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0,j=m-1;i<j;i++,j--)
    {
        for(int k=0;k<n;k++)
        {
            int temp = a[k][j];
            a[k][j]=a[k][i];
            a[k][i] = temp;
        }
    }
    printf("\vUpdated Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}
