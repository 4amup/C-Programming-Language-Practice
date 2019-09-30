#include <stdio.h>

int main(int argc, char const *argv[])
{
    int man, women, children;

    // 公式
    // man * 3 + women * 2 + children = 50;
    // man + women + children = 30;
    printf("Man   Women   Children\n");

    for (man = 0; man < 30; man++)
    {
        for (women = 0; women < 30; women++)
        {
            for (children = 0; children < 30; children++)
            {
                if (man * 3 + women * 2 + children == 50 && man + women + children == 30)
                {
                    printf("%3d%8d%8d\n", man, women, children);
                }
            }
        }
    }
    return 0;
}
