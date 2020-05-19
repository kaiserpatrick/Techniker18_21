package Java.Haustiere;

class Hund extends Haustiere{
  // neue Instanzvariable nicht in Katze
  String kategorie;
  double einheit;
  
  //Haustiere(String name, double futtervorrat)
  Hund(String name, double futtervorrat, int kat){
    super(name,futtervorrat);
    switch (kat) {
      case  1: 
            kategorie = "Kleinhund";
            einheit = 1.0;
        break;
      case  2: 
            kategorie = "Mittelgrosse Hunde";
            einheit = 1.5;
        break;
      case  3:
            kategorie = "Große Hunde";
            einheit = 2.0;
        break;
      default: 
        
    } // end of switch
  }
  
  public void friss(){
    System.out.println(name + ": " + futtervorrat);
    futtervorrat = futtervorrat - einheit; 
  } 
      
  public void sprich(){
    System.out.println("Wuff!");
  }
  
  public void anzeigen(){
    System.out.print("(Kategorie: " + kategorie + ") ");
    super.anzeigen();
  }    
}  
