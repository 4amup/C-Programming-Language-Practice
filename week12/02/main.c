#include <stdio.h>
#define MAXSIZE 100

// 学生的相关数据结构体定义
typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
} WIN;

void Addup(WIN stu[], int n);

int FindMax(WIN student[], int n);

int main(int argc, char const *argv[])
{
    // 声明学生数组
    WIN students[MAXSIZE];
    int n = 0;
    printf("Input n:");
    scanf("%d", &n);

    // 录入学生信息
    Addup(students, n);

    // 找出获得奖学金最高的学生
    FindMax(students, n);

    return 0;
}

void Addup(WIN stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        WIN student;

        printf("Input name:");
        scanf("%s", &student.name);

        printf("Input final score:");
        scanf("%d", &student.finalScore);

        printf("Input class score:");
        scanf("%d", &student.classScore);

        printf("Class cadre or not?(Y/N):");
        scanf(" %c", &student.work);

        printf("Students from the West or not?(Y/N):");
        scanf(" %c", &student.west);

        printf("Input the number of published papers:");
        scanf("%d", &student.paper);

        // 计算奖学金数目
        student.scholarship = 0;

        // 院士奖学金：期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生每人均可获得8000元；
        if (student.finalScore > 80 && student.paper >= 1)
        {
            student.scholarship = student.scholarship + 8000;
        }
        //  五四奖学金：期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生每人均可获得4000元；
        if (student.finalScore > 85 && student.classScore > 80)
        {
            student.scholarship = student.scholarship + 4000;
        }
        // 成绩优秀奖：期末平均成绩高于90分（>90）的学生每人均可获得2000元；
        if (student.finalScore > 90)
        {
            student.scholarship = student.scholarship + 2000;
        }
        // 西部奖学金：期末平均成绩高于85分（>85）的西部省份学生每人均可获得1000元；
        if (student.finalScore > 85 && student.west == 'Y')
        {
            student.scholarship = student.scholarship + 1000;
        }
        // 班级贡献奖：班级评议成绩高于80分（>80）的学生干部每人均可获得850元；
        if (student.classScore > 80 && student.work == 'Y')
        {
            student.scholarship = student.scholarship + 850;
        }

        // 打印奖学金数
        printf("name:%s,scholarship:%d\n", student.name, student.scholarship);

        // 数组添加成员
        stu[i] = student;
    }
}

int FindMax(WIN student[], int n)
{
    WIN maxStudent = student[0];

    // 遍历寻找
    for (int i = 0; i < n; i++)
    {
        if (student[i].scholarship > maxStudent.scholarship)
        {
            maxStudent = student[i];
        }
    }

    // 输出奖学金最高的学生信息
    printf("%s get the highest scholarship %d\n", maxStudent.name, maxStudent.scholarship);
    return 0;
}