#include <stdio.h>

int GetCount(int a[], int n);

int main(int argc, char const *argv[])
{
    int n = 0;
    int count = 0;
    while (n < 2 || n > 1000)
    {
        scanf("%d", &n);
    }

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    count = GetCount(arr, n);
    printf("%d", count);
    return 0;
}

int GetCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        a[i];
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            for (int i = 0; i < n; i++)
            {
                if (sum == a[i])
                {
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}
