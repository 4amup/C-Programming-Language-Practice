#include <stdio.h>
#define M 100
#define N 100

void FindSaddlePoint(int a[M][N], int m, int n);
void SetArr(int a[M][N], int m, int n);

int main(int argc, char const *argv[])
{
    int m, n;
    int arr[M][N];
    printf("Input m,n:\n");
    scanf("%d,%d", &m, &n);
    printf("Input matrix:\n");
    SetArr(arr, m, n);
    FindSaddlePoint(arr, m, n);
    return 0;
}

void FindSaddlePoint(int a[][N], int m, int n)
{
    int max, min, i, j, s, o;
    int b, sum = 0;
    //--------------------------------
    for (j = 0; j < m; j++)
    {
        max = a[j][0]; //找到第j行的最大值
        for (i = 0; i < n; i++)
        {
            if (a[j][i] > max)
                max = a[j][i];
        }
        //---------------------------------
        for (o = 0; o < n; o++)
        {
            if (a[j][o] == max) //找到最大值的列
            {
                b = o;
            }
        }
        //---------------------------------
        min = a[0][b];
        for (s = 0; s < m; s++) //找到这一列的最小值
        {
            if (a[s][b] < min)
                min = a[s][b];
        }
        //---------------------------------
        if (a[j][b] == min)
        //判断行的最大值与列的最小值是否相等
        {
            printf("a[%d][%d] is %d\n", j, b, a[j][b]);
            sum = sum + 1;
        }
        //--------------------------------------
    }
    if (sum == 0)
        printf("No saddle point!\n");
}

void SetArr(int a[M][N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
