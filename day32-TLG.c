#include <stdio.h>

int main(void) {
	int rounds, s1, s2, winner, margin = 0, totalS1 = 0, totalS2 = 0;

    scanf("%d", &rounds);

    while (rounds--)
    {
        scanf("%d %d", &s1, &s2);
        totalS1 += s1;
        totalS2 += s2;

        if (totalS1 > totalS2 && totalS1 - totalS2 > margin)
        {
            winner = 1;
            margin = totalS1 - totalS2;
        }
        else if (totalS2 > totalS1 && totalS2 - totalS1 > margin)
        {
            winner = 2;
            margin = totalS2 - totalS1;
        }
    }

    printf("%d %d", winner, margin);
	return 0;
}
