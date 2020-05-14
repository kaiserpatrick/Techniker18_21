package Java.Haustiere;

class Katze extends Haustiere{
  // neue Instanzvariable nicht in Hund
  String haltung;

  Katze(String name, double futtervorrat, int halt){
    super(name,futtervorrat);
    switch (halt) {
      case  1: 
            haltung = "Wohnung";
        break;
      case  2: 
            haltung = "Artgerecht";
        break;
      default: 
        
    } // end of switch
    
  }

  public void friss(){
    System.out.println(name + ": " + futtervorrat);
    futtervorrat = futtervorrat - 0.5;
  }
        
  public void sprich(){
    System.out.println("Miau!");
  }
  
  public void anzeigen(){
    System.out.print("(Haltung: " + haltung + ") ");
    super.anzeigen();
  }    
}
