#include <stdio.h>
#define N 10

int GetApple(int a[], int height, int n);

int main(int argc, char const *argv[])
{
    int a[N],
        height,
        n;

    for (int i = 0; i <N; i++)
    {
        scanf("%d", &a[i]);
    }
    
    height = scanf("%d", &height);

    n = GetApple(a, height, n);
    return 0;
}

int GetApple(int a[], int height, int n)
{
    return 10;
}
