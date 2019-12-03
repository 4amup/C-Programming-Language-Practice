#include <stdio.h>
#define N 10

int GetApple(int a[], int height, int n);

int main(int argc, char const *argv[])
{
    int a[N];
    int height = 0, n = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &height);

    n = GetApple(a, height, N);
    printf("%d", n);
    return 0;
}

int GetApple(int a[], int height, int n)
{
    int count = 0;
    height += 30;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= height)
        {
            count++;
        }
    }
    return count;
}
