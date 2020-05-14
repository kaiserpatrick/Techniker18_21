#include <stdio.h>
#include <stdlib.h>

signed int sum;                         /* Globale Variable für die Summe */
double divSum;                          /* Globale Variable für die divSumme */
int zahl1, zahl2;                       /* Globale Variable für die Zahleneingabe */

int Addition(int x, int y);             /* Prototyp Funktion Addieren */
int Subtraktion(int x, int y);          /* Prototyp Funktion Subtrahieren */
int Multiplikation(int x, int y);       /* Prototyp Funktion Multiplizieren */
int Modulodivision(int x, int y);       /* Prototyp Funktion Modulodivision */
double Division(double x, double y);    /* Prototyp Funktion Dividieren */

void zahlenEingabe();                   /* Prototyp Funktion für Zahlen Eingbeen */

// Start Programm
int main () {
    system("color 02");

    // Variablen Deklarieren
    char    operand, start;         // Character für die Switch-Case Verzweigung
    int     summe;                  // Die Summe der Ganzzahlen wird hier gespeichert
    double  divSumme;               // Die Division benötigt ein double, für die Gleitkommezahl

    // Hier wird entschieden, welche Rechenoperation das Programm ausführen soll
    printf("Taschenrechner by (c) Patrick v0.2\n\n");
    printf("Starten bitte Enter druecken\n");
    scanf("%c", &start);
    fflush(stdin);
    START:

    zahlenEingabe();

    printf("Jetzt den Operand eingeben (*, -, +, /, %%): ");
    scanf("%c", &operand);

    switch(operand) {
        
        // Multiplikation
        case '*':   printf("\nWillkommen bei der Multiplikation\n");
                    summe = Multiplikation(zahl1, zahl2);

                    printf("%d * %d = %d\n\n", zahl1, zahl2, summe);
                    goto START;
                    break;

        // Division
        case '/':   printf("\nWillkommen bei der Division\n");
                    divSumme = Division(zahl1, zahl2);

                    printf("%d / %d = %lf\n\n", zahl1, zahl2, divSumme);
                    goto START;
                    break;

        // Subtraktion
        case '-':   printf("\nWillkommen bei der Subtraktion\n");
                    summe = Subtraktion(zahl1, zahl2);

                    printf("%d - %d = %d\n\n", zahl1, zahl2, summe);
                    goto START;
                    break;

        // Addition
        case '+':   printf("\nWillkommen bei der Addition\n");
                    summe = Addition(zahl1, zahl2);

                    printf("%d + %d = %d\n\n", zahl1, zahl2, summe);
                    goto START;
                    break;

        // Modulodivison
        case '%':   printf("\nWillkommen bei der Modulodivision\n");
                    summe = Modulodivision(zahl1, zahl2);

                    printf("%d % %d = %d\n\n", zahl1, zahl2, summe);
                    goto START;
                    break;

        case '0':   goto ENDE;
                    break;
        
        /*
        Falls kein Operand ausgewählt wird, springt das Programm in den default;
        Das Programm gibt die folgenden Zeilen aus und springt danach zum Anfang
        des Programms 
        */

        default:    printf("\nKeine Operation gewaehlt!\n\n");
                    goto START;
                    break;
    }

    ENDE:
    // Hier endet das Programm
    system("PAUSE");
    return 0;
}
/* Funktionen zu den Prototype */
int Addition(int x, int y) {
    sum = x + y;

    return(sum);
}

int Subtraktion(int x, int y) {
    sum = x - y;

    return(sum);
}

int Multiplikation(int x, int y) {
    sum = x * y;

    return(sum);
}

int Modulodivision(int x, int y) {
    sum = x % y;

    return(sum);
}

double Division(double x, double y) {
    divSum = x / y;

    return(divSum);
}

void zahlenEingabe() {
    for(int i = 0; i <= 1; i++){

        int x;
        int zahl = i + 1;

        printf("Bitte gebe jetzt die  %d. Zahl ein: ", zahl);
        scanf("%4d", &x);
        fflush(stdin);

        if(i == 0){
            zahl1 = x;
        } else if(i == 1) {
            zahl2 = x;
        }
    }
}
