#include<stdio.h>
int main()
{
    int vowel=0, alphabet=0, count;
    char letter;
    for (count=0; count<10; count++)
    {
        printf("\nEnter letter a-z : ");
        scanf(" %c",&letter);
        if ((letter=='a') || (letter=='e') || (letter=='i') || (letter=='o') || (letter=='u'))
            vowel++;
        else
            alphabet++;
    }
    printf("\n***Result***\n");
    printf("Vowel (a, e, i, o, u) = %d\n", vowel);
    printf("Other letter          = %d", alphabet);
    return 0;
}
