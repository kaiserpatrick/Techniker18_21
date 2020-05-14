# Aufgabe 2 (http://www.gailer-net.de/tutorials/java/Notes/chap51/progExercises51.html)
Erstellen Sie eine abstrakte Klasse Haustiere. Die Klasse besteht aus den Instanzvariablen
```java
String name;
double futtervorrat;
int    anzahlTage; // gibt die Anzahl Tage aus, die der Futtervorrat reicht
```
einem Konstruktor, der die beiden Instanzvariablen name und futtervorrat initialisiert ( Dieser Kontruktor kann zwar nicht direkt genutzt werden, da die abstrakte Klasse Haustiere nicht instanziiert werden kann, aber er kann von den Subklassen Katze und Hund verwendet werden.)
der Methode
```java
public void fuettern() {
  // Hier erfolgt zuerst der Aufruf der Methode sprich().
  // Solange der Futtervorrat reicht, wird dann die Methode friss() aufgerufen
  // und die Anzahl der Tage hochgezählt, die der Vorrat reicht.
  // Implementiert werden die abstrakten Methoden sprich() und friss() erst in den Subklassen.
}
```
der Methode
```java
public void anzeigen() {
 // zeigt den Namen des Haustiers an und wie viele Tage der Futtervorrat reicht
}
```
und den abstrakten Methoden
```java
    public abstract void friss();
    public abstract void sprich();
```
Leiten Sie von der abstrakten Klasse Haustiere die Klassen Hund und Katze ab. Schreiben Sie für beide Subklassen einen Konstruktor, der den Konstruktor der Superklasse aufruft. Implementieren Sie anschließend in den Subklassen die abstrakten Methoden:

Die Methode sprich() gibt "Wuff!" bzw "Miau!" aus.
Die Methode friss() verringert den Wert der Instanzvariablen futtervorrat um 1.0 (Hund) bzw. um 0.5 (Katze) und gibt den Namen des Haustiers mit dem jeweiligen Stand des Futtervorrats aus.
Testen Sie das Programm in einer Klasse HaustierFuettern. Die Ausgabe sieht dann ungefähr wie folgt aus:

# Aufgabe — Erweiterte Subklassen (http://www.gailer-net.de/tutorials/java/Notes/chap52/progExercises52.html)
Die Subklassen der Programmieraufgabe Haustiere des vorherigen Kapitels sollen erweitert werden.

Die Klasse Hund bekommt zusätzlich eine Instanzvariable kategorie(Typ String). Es wird 3 Kategorien geben:

1 - Kleinhunde
2 - Mittelgrosse Hunde
3 - Große Hunde
Die Klasse Katze bekommt eine Instanzvariable haltung (Typ String). Es wird zwei Typen geben:

1 - Wohnung
2 - Artgerecht
Erweitern Sie die Konstruktoren der Subklassen um eine int-Variable, über die die Instanzvariablen kategorie bzw. haltung entsprechend initialisiert werden.

Überschreiben Sie in den Subklassen die Methode anzeigen() der Superklasse. Sie soll zusätzlich die Kategorie bzw. den Typ der Haltung ausgeben.