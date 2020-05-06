#include <stdio.h>
#include <string.h>

typedef struct candidate
{
    char name[20];
    int count;
} CANDIDATE;

int main(int argc, char const *argv[])
{
    // 候选者，枚举类实现
    CANDIDATE candidates[3] = {
        {"tom", 0},
        {"jack", 0},
        {"rose", 0}};

    // 选举这人数
    int number = 0;
    printf("Input the number of electorates:");
    scanf("%d", &number);

    // 挨个投票
    for (int i = 1; i < number + 1; i++)
    {
        char name[20] = "";
        printf("Input vote %d:", i);
        scanf("%s", name);

        // 遍历匹配
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(candidates[i].name, name) == 0)
            {
                candidates[i].count++;
                break;
            }
        }
    }

    // 逐个候选者输出得票信息
    printf("Election results:\n");
    CANDIDATE winner = candidates[0];
    for (int i = 0; i < 3; i++)
    {
        printf("%s:%d\n", candidates[i].name, candidates[i].count);
        if (candidates[i].count > winner.count)
        {
            winner = candidates[i];
        }
    }

    // 输出获胜者信息
    printf("%s wins\n", winner.name);
    return 0;
}
