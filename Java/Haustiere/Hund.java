package Java.Haustiere;

class Hund extends Haustiere{
  // neue Instanzvariable nicht in Katze
  String kategorie;
  
  //Haustiere(String name, double futtervorrat)
  
  Hund(String name, double futtervorrat, int kat){
    super(name,futtervorrat);
    switch (kat) {
      case  1: 
            kategorie = "Kleinhund";
        break;
      case  2: 
            kategorie = "Mittelgrosse Hunde";
        break;
      case  3:
            kategorie = "Große Hunde";
        break;
      default: 
        
    } // end of switch
  }
  
  public void friss(){
    System.out.println(name + ": " + futtervorrat);
    futtervorrat = futtervorrat - 1.0; 
  } 
      
  public void sprich(){
    System.out.println("Wuff!");
  }
  
  public void anzeigen(){
    System.out.print("(Kategorie: " + kategorie + ") ");
    super.anzeigen();
  }    
}  
