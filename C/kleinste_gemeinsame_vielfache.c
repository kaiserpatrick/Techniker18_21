#include <stdio.h>
int main()
{
    int zahl1, zahl2, minMultiple;

    printf("Kleinstes gemeinsamen Vielfaches berechnen\n");
    printf("Dafuer bitte zwei Ganzzahlen angeben, die in deinem Nenner stehen!\n");
    printf("Erste Zahl: ");
    scanf("%d", &zahl1);
    printf("Zweite Zahl: ");
    scanf("%d", &zahl2);

    // Groesste Zahl zwischen zahl1 und zahl2 wird in der Variable minMultiple gespeichert
    minMultiple = (zahl1 > zahl2) ? zahl1 : zahl2;

    // Always true
    while(1)
    {
        if( minMultiple % zahl1 == 0 && minMultiple % zahl2 == 0 )
        {
            printf("Das kleinste gemeinsame Vielfache der Zahlen %d und %d ist %d.", zahl1, zahl2, minMultiple);
            break;
        }
        printf("minMultiple: %d\n", minMultiple);
        ++minMultiple;
    }
    return 0;
}
