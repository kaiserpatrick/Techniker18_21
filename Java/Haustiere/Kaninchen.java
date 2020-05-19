//  Patrick Kaiser
package Java.Haustiere;

public class Kaninchen extends Haustiere {
    // neue Instanzvariable nicht in Katze
  String geschlecht;

  Kaninchen(String name, double futtervorrat, int geschl) {
    super(name,futtervorrat);
    switch (geschl) {
      case  1: 
            geschlecht = "maennlich";
        break;
      case  2: 
            geschlecht = "weiblich";
        break;
    }
  }

  public void friss(){
    System.out.print(futtervorrat + " ");
    switch (geschlecht) {
      case  "maennlich":
            futtervorrat = futtervorrat - 1.0; 
        break;
      case  "weiblich":
            futtervorrat = futtervorrat - 0.5;  
        break;
    }
  } 
      
  public void sprich(){
    System.out.println("Fiep, Fiep!");
  }
  
  public void anzeigen(){
    System.out.println("");
    System.out.print("(Geschlecht: " + geschlecht + ") ");
    super.anzeigen();
  }
    
}