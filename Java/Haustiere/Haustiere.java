package Java.Haustiere;

abstract class Haustiere{
  
  //Instanzvariablen für alle Tiere
  String name;
  double futtervorrat;
  int    anzahlTage; // gibt die Anzahl Tage aus, die der Futtervorrat reicht
  
  Haustiere(String name, double futtervorrat){
    this.name = name;
    this.futtervorrat = futtervorrat;  
  } 
  
  public void fuettern()
  {
    sprich();
    while (futtervorrat > 0) { 
      friss();
      anzahlTage++;
    } // end of while
  }
  
  public void anzeigen()
  {
    // zeigt den Namen des Haustiers an und wie viele Tage der Futtervorrat reicht
    System.out.println("Der Vorrat fuer " + name + " reicht " + anzahlTage + " Tage.");
  }
  
  public abstract void friss();      //abstrakte Methoden == Plan
  public abstract void sprich();     //jedes Haustier soll fressen und sprechen!
  
}
