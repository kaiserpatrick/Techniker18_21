#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

unsigned int eingabe;
unsigned char name[20], enter;

double ergebnis, abstand, radius;

void startPrg();
void welcome();
void eingabeName();
void ergebnisAnzeige();
double umfangBerechnung(double r);
double abstandBerechnung(double ergebnis, double r);

int main() {

    startPrg();
    eingabeName();

    START:
    welcome();

    switch(eingabe){
        case 0:
            radius = 2440000.00;
            printf("\nMerkurberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 1:
            radius = 6052000.00;
            printf("\nVenusberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 2:
            radius = 6371000.00;
            printf("\nErdeberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 3:
            radius = 3390000.00;
            printf("\nMarsberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 4:
            radius = 69911000.00;
            printf("\nJupiterberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 5:
            radius = 58232000.00;
            printf("\nSaturnberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 6:
            radius = 25362000.00;
            printf("\nUranusberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 7:
            radius = 24622000.00;
            printf("\nNeptun (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 8:
            radius = 1188000.00;
            printf("\nPlutoberechnung (in Meter)\n");
            umfangBerechnung(radius);
            abstandBerechnung(ergebnis, radius);
            ergebnisAnzeige();
            goto START;
            break;
        case 9:
            goto END;
            break;
        default:
            printf("\nKeine gueltige Eingabe!\n\n");
            goto START;
            break;
    }

    END:
    system("pause");
    return 0;
}

void startPrg() {
    printf("PLANETENUMFANG - by Patrick v0.1\n");
    printf("Das Programm Startet, sobald Enter gedrueckt wird!");
    scanf("%c", &enter);
    fflush(stdin);

}

void eingabeName(){
    printf("\nBitte geben Sie Ihren Namen ein: ");
    fgets(name, 20, stdin);
    strtok(name, "\n");
}

void welcome() {
    printf("-------------------------");
    printf("\n\nWillkommen %s\n", name);
    printf("\nWas moechten Sie tun?\n");
    printf("Geben Sie unten die nebenstehende Zahl des Planeten unseres Sonnensystems ein!\n");
    printf("[0] Merkur\n");
    printf("[1] Venus\n");
    printf("[2] Erde\n");
    printf("[3] Mars\n");
    printf("[4] Jupiter\n");
    printf("[5] Saturn\n");
    printf("[6] Uranus\n");
    printf("[7] Neptun\n");
    printf("[8] Pluto\n");
    printf("[9] Beenden\n");
    printf("-------------------\n");
    printf("Ihre Eingabe: ");
    scanf("%1d", &eingabe);
    fflush(stdin);
}

double umfangBerechnung(double r){
    ergebnis = r * 2.0 * PI;
    ergebnis++;

    return (ergebnis);
}

double abstandBerechnung(double ergebnis, double r) {
    abstand = ergebnis / (PI * 2.0);
    abstand = (abstand - r) * 100;

    return (abstand);
}

void ergebnisAnzeige(){
    printf("\n\n------------------------------------------\n\n");
    printf("Der Umfang betraegt: %.2lf m\n", ergebnis);
    printf("Der Abstand betraegt: %.2lf m", abstand);
    printf("\n\n------------------------------------------\n\n");
    system("pause");
}