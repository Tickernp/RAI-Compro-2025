#include <stdio.h>

int main() {
    int totalMin, hours, minutes;

    printf("Please enter time in minutes: ");
    scanf("%d", &totalMin);

    hours = totalMin / 60;
    minutes = totalMin % 60;

    printf("%d minutes is %d hour(s) and %d minute(s).\n", totalMin, hours, minutes);

    return 0;
}
