#include <stdio.h>
int sum(int);
int main()
{
    printf("\v");
    printf("***************************************************************\n");
    int n;
    printf("ENTER A POSITIVE NUMBER: ");
    scanf("%d",&n);
    printf("THE NUMBER: %d\n\vn(mod 9) = %d",n,n%9?n%9:9);
    do{
        n = sum(n);
    }while(n>9);
    printf("\n\vTHE SUM OF DIGITS: %d\n",n);
    printf("***************************************************************\v\n");

}
int sum(int n)
{
    int i=0,j=n;
    while(j)
    {
        i += j%10;
        j /= 10;
    }
    return i;
}
