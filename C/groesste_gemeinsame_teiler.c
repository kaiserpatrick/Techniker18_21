#include <stdio.h>
int main()
{
    int zahl1, zahl2, i, ggt;

    printf("Groesste Gemeinsen Teiler herausfinden\n");
    printf("Gebe dazu zwei Ganzzahlen an, die in deinem Nenner stehen!\n");
    printf("Erste Zahl: ");
    scanf("%d", &zahl1);
    printf("Zweite Zahl: ");
    scanf("%d", &zahl2);

    for(i = 1; i <= zahl1 && i <= zahl2; ++i)
    {
        // �berpr�fe ob die Variable i ein gemeinsamer Faktor beider Zahlen ist.
        if(zahl1 % i == 0 && zahl2 % i == 0)
            printf("i Variable: %d, ggt Variable = %d\n", i, ggt);
            ggt = i;
    }

    printf("Der groesste Gemeinsame Teiler von Zahl1 (%d) und Zahl2 (%d) ist %d", zahl1, zahl2, ggt);

    return 0;
}
