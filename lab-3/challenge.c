#include <stdio.h>

char getLetterGrade(int score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

float getNumericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default: return 0.0;
    }
}

int main() {
    int calScore, phyScore, comScore;
    char calGrade, phyGrade, comGrade;
    float calNum, phyNum, comNum, gpa;

    printf("Calculus score: ");
    scanf("%d", &calScore);
    printf("Physic score: ");
    scanf("%d", &phyScore);
    printf("compro score: ");
    scanf("%d", &comScore);

    calGrade = getLetterGrade(calScore);
    phyGrade = getLetterGrade(phyScore);
    comGrade = getLetterGrade(comScore);

    calNum = getNumericGrade(calGrade);
    phyNum = getNumericGrade(phyGrade);
    comNum = getNumericGrade(comGrade);

    gpa = (calNum + phyNum + comNum) / 3;

    printf("\n%-10s %-6s %-6s %-6s\n", "Subject", "Score", "Grade", "Grade");
    printf("------------------------------\n");
    printf("%-10s %-6d %-6c %-6.1f\n", "Cal", calScore, calGrade, calNum);
    printf("%-10s %-6d %-6c %-6.1f\n", "Physics", phyScore, phyGrade, phyNum);
    printf("%-10s %-6d %-6c %-6.1f\n", "compro", comScore, comGrade, comNum);

    printf("\nGPA: %.1f\n", gpa);

    return 0;
}

