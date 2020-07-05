public class BlumenTest{
  public static void main(String[] args){
    Blumen[] blumen = {new Rose(), new Tulpe(), new Nelke()}; // Ein Array aus Blumen, die die Objekte von Rose, Tulpe und Nelke instanziiert
    
    for (int i=0; i<3; i++){
      blumen[i].identifizieren(); // Ruft die identifizieren() Methode des Objektes aus, die an der Indexstelle steht und Fängt mit der Ausgabe an
      blumen[i].farbe(); // Ruft die Methode farbe aus der Blumenklasse auf und erweitert die Ausgabe um eine weitere Textpassage und schreibt die übergebene Farbe mit dazu
      switch (blumen[i].blume){
        case Blumen.ROSE: ((Rose)blumen[i]).wurzeln();  // CASE: Prüft auf die Farbe des Objektes, die bei der Erzeugung übergeben wurden
                          break;                        // CASTING: Wandelt den Datentyp um
        case Blumen.TULPE: ((Tulpe)blumen[i]).zwiebeln();
                          break;
        case Blumen.NELKE: ((Nelke)blumen[i]).stauden();
                          break;
      }
    }
  }
}
