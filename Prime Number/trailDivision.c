#include <stdio.h>
#include <stdbool.h>
void trialDivision(void);
int main()
{
    trialDivision();
}
void trialDivision(void)
{
    unsigned long long int N;
    bool prime = true;
    printf("Enter a number: ");
    scanf("%llu",&N);
    printf("1");
    while(!(N%2))
    {
        N /= 2;
        prime = false;
        printf(" x %d",2);
    }
    unsigned long long int d=3;
    while(d*d<= N)
    {
        while(!(N%d))
        {
            prime = false;
            N /= d;
            printf(" x %llu",d);
        }
        d += 2;
    }
    if(N != 1)
    {
        printf(" x %d",N);
    }
    if(prime)
    {
        printf("\n\t\vPRIME\v\n");
    }
    else
    {
        printf("\n\t\vNOT PRIME\v\n");
    }
}
