#include <stdio.h>

int main() 
{
    char name[50];
    int studentID;
    float prog, physics, calc;
    float gpa;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your Programming score: ");
    scanf("%f", &prog);

    printf("Enter your Physics score: ");
    scanf("%f", &physics);

    printf("Enter your Calculus score: ");
    scanf("%f", &calc);

    gpa = (prog + physics + calc) / 3;

    
    printf("Hi %s (%d)! Your GPA is %.2f\n", name, studentID, gpa);

    return 0;
}
