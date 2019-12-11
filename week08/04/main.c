#include <stdio.h>
#define N 10

int IsPrime(int n);
int main(int argc, char const *argv[])
{
    int n;
    int primes[N] = {};
    int sum = 0;
    printf("Input n(n<=500):");
    while (n > 500 || n < 1)
    {
        scanf("%d", &n);
    }

    if (n == 1)
    {
        primes[0] = 0;
        sum = 0;
        return 0;
    }

    int index = 0; //素数数组index
    for (int i = n; i > 1; i--)
    {

        if (IsPrime(i) == 1 && index < N)
        {
            primes[index] = i;
            index++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (primes[i] > 0)
        {
            sum += primes[i];
            printf("%6d", primes[i]);
        }
    }

    printf("\nsum=%d\n", sum);
    return 0;
}

int IsPrime(int n)
{
    int flag = 1; //0-非素数 1-素数
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
