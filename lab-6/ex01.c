#include<stdio.h>
int main()
{
    int i;
    struct information
    {
        char name[100];
        int age;
        float score;
    }in[3];

    for ( i = 0; i < 3; i++)
    {
        printf("Student[%d]'s name: ", i+1);
        scanf(" %s", in[i].name);
        printf("Student[%d]'s age: ", i+1);
        scanf("%d", &in[i].age);
        printf("Student[%d]'s score: ", i+1);
        scanf("%f", &in[i].score);
    }
    for (int i = 0; i < 3; i++) 
    {
        printf("Student %d name is \"%s\", age %d, score %.1f\n", i + 1, in[i].name, in[i].age, in[i].score);
    }
    return 0;
}