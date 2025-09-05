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
        scanf(" \n%s", in[i].name);
        printf("Student[%d]'s age: ", i+1);
        scanf("%d", &in[i].age);
        printf("Student[%d]'s score: ", i+1);
        scanf("%f", &in[i].score);
    }
    
    int max = 0;
    for (int i = 1; i < 3; i++) {
        if (in[i].score > in[max].score) {
            max = i;
        }
    }

    printf("The highest score belongs to %s at %.1f scores!\n",
           in[max].name, in[max].score);

    return 0;
}