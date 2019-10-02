/*
 *Sieve of Eratosthenes
 */
#include <stdio.h>
#include <stdbool.h>
#define N 100000
int main()
{
    bool prime[N] = {false};
    prime[0] = true;
    prime[1] = true;
    long long int i = 2;
    while(i*i<= N-1)
    {
        long long int j = i*i;
        while(j < N)
        {
            prime[j]=true;
            j += i;
        }
    do{
        i++;
    }
    while(prime[i]);
    }
    for(long long int i=0; i < N; i++)
    {
        if(prime[i]==false)
        {
            printf("%ld\n", i);
        }
    }
}

