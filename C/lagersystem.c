#include <stdio.h>
#include <stdlib.h>

unsigned int eingabe;
unsigned char name[20], artBez[255], desc[10000], lagerPlatz[15], enter, verfuegbar;
unsigned int artNr[], stueckZahl;
double stueckPreis;

void startPrg();
void welcome();
void beenden();
void addArtikel();
void getArtikel();
void getDesc();
void getLager();

int main () {
    startPrg();
    eingabeName();

    START:
    welcome();

    switch(eingabe){
        case 0:
            addArtikel();
            goto START;
            break;
        case 1:
            getArtikel();
            goto START;
            break;
        case 2:
            getDesc();
            goto START;
            break;
        case 3:
            getLager();
            goto START;
            break;
        case 4:
            printf("\n\nComing Soon\n");
            system("pause");
            goto START;
            break;
        case 5:
            goto START;
            system("pause");
            break;
        case 6:
            goto END;
            system("pause");
            break;
        default:
            printf("\n\nUngueltige Eingabe\n");
            system("pause");
            goto START;
            break;
    }
    


    END:
    beenden();
    return 0;
}

void startPrg() {
    printf("LAGERSYSTEM - by Patrick v0.2\n\n");
    printf("Das Programm Startet, sobald Enter gedrueckt wird!\n");
    scanf("%c", &enter);
    fflush(stdin);
}

void beenden() {
    printf("\n\nErfolgreich ausgeloggt!\n\n");
    printf("Das Programm wird beendet, sobald Enter gedrueckt wird!\n");
    scanf("%c", &enter);
    fflush(stdin);
}

void eingabeName(){
    printf("Bitte geben Sie Ihren Namen ein: ");
    fgets(name, 20, stdin);
    strtok(name, "\n");
}

void welcome() {
    printf("Willkommen %s\n", name);
    printf("\nWas moechten Sie tun?\n");
    printf("[0] Artikel hinzufuegen\n");
    printf("[1] Artikel anzeigen\n");
    printf("[2] Beschreibung anzeigen\n");
    printf("[3] Lagerplatz\n");
    printf("[4] Nachbestellen\n");
    printf("[5] Zurueck\n");
    printf("[6] Beenden\n");
    printf("-------------------\n");
    printf("Ihre Eingabe: ");
    scanf("%1d", &eingabe);
    fflush(stdin);
}

void addArtikel() {
    printf("\n\nArtikel hinzufuegen\n");
    printf("Artikel Bezeichnung: ");
    fgets(artBez, 255, stdin);
    strtok(artBez, "\n");
    printf("Artikel Beschreibung: ");
    fgets(desc, 10000, stdin);
    strtok(desc, "\n");
    printf("Lagerplatz (Lager / Platz) z. B. L 20 / P 32: ");
    fgets(lagerPlatz, 15, stdin);
    strtok(lagerPlatz, "\n");
    printf("Bitte geben Sie die Artikelnummer an: ");
    scanf("%10ld", &artNr);
    fflush(stdin);
    printf("Jetzt bitte den Stueckpreis: ");
    scanf("%lf", &stueckPreis);
    fflush(stdin);
    printf("Zuletzt bitte die Stueckzahl: ");
    scanf("%ld", &stueckZahl);
    fflush(stdin);

    printf("%ld", stueckZahl);
    
    /*
    if (stueckZahl == '0') {
        verfuegbar = "n";
    } else {
        verfuegbar = "j";
    }
    */

    system("pause");
}

void getArtikel() {
    printf("\n\nArtikel Anzeigen\n");
    printf("\n\tArtikel Bezeichnung\t\tArtikel Nr.\tStueckpreis\tStueckzahl\tVerfuegbar");
    printf("\n\t%-15s\t\t%11ld\t%11.2lf\t%10ld\t%c\n\n", artBez, artNr, stueckPreis, stueckZahl, verfuegbar);
    system("pause");
}

void getDesc() {
    printf("\n\nArtikel Beschreibung Anzeigen\n");
    printf("\n%s\n\nUVP: %.2lf\t\t\tAktuelle Stueckzahl: %d\n\nArtikelnummer: %d\n\n", desc, stueckPreis, stueckZahl, artNr);
    system("pause");
}

void getLager() {
    printf("\n\nLagerplatz Anzeigen\n");
    printf("\n\tArtikel Bezeichnung\t\tArtikel Nr.\t\tLagerplatz");
    printf("\n\t%-15s\t\t%11ld\t\t%-10s\n\n", artBez, artNr, lagerPlatz);
    system("pause");
}