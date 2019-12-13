#include <stdio.h>
//函数功能：根据数组a中记录的学生到达时间确定课程是否被取消，取消则返回1，否则返回0
int IsCancel(int a[], int n, int k);
int main()
{
    // get 参数n和k
    int n, k;
    printf("Input n,k:\n");
    scanf("%d,%d", &n, &k);

    // get 学生到达时间
    int time[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &time[i]);
    }

    if (IsCancel(time, n, k) == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

int IsCancel(int a[], int n, int k)
{
    int flag = 0;
    int count = 0; //统计按时上课的人数
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (count < k)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}