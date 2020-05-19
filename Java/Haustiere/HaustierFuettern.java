package Java.Haustiere;

class HaustierFuettern{
  
  public static void main(String[] args){

    Haustiere[] hFeld= new Haustiere[5];

    hFeld[0] = new Katze("Minka", 1.0, 1);
    hFeld[1] = new Hund("Rambo", 9.0, 3);
    hFeld[2] = new Hund("Isi", 4.0,2);
    hFeld[3] = new Katze("Morle", 1.5, 2);
    hFeld[4] = new Hund("Strolchie", 3.0, 1);

    for(int i = 0; i < hFeld.length; i++) {
      hFeld[i].fuettern();
      hFeld[i].anzeigen();
    }
    
    /*
      Katze minka = new Katze("Minka", 5.0, 1); 
      minka.fuettern();
      minka.anzeigen();
      
      System.out.println();    //Leerzeile
    
      Hund strolchie = new Hund("Strolchie", 5.0, 1);
      strolchie.fuettern();
      strolchie.anzeigen();
    */
  }
  
}
